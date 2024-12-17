import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Vector3
from nav_msgs.msg import Odometry
from geometry_msgs.msg import PoseArray
from geometry_msgs.msg import Pose
import time

from godown_interface.action import Godownint

class GoDownNode(Node):

    def __init__(self):
        super().__init__('godown_server')
        
        self.power = self.create_publisher(Vector3, '/power', 10)
    
        self.subscription = self.create_subscription(
            Odometry,
            '/odometry/filtered',
            self.odometry_callback,
            10)

        # Pose subscription for Z position
        self.pose_subscription = self.create_subscription(
            PoseArray,
            '/model/own/pose',
            self.pose_array_callback,
            10)

        self._action_server = ActionServer(
            self,
            Godownint,
            'godownserver',
            self.execute_callback)
        
        # Initialize variables for position
        self.x = 0
        self.y = 0
        self.z = 0  # Z position
        self.initialized = False  # To track if odometry has been received
        self.stabilizing = False  # Flag to check if stabilization is in progress

        # Declare constant Z force as a parameter
        self.declare_parameter('constant_z_force', -1.0)  
        self.constant_z_force = self.get_parameter('constant_z_force').get_parameter_value().double_value

    def odometry_callback(self, msg):
        """Callback to save the robot's position."""
        self.x = msg.pose.pose.position.x
        self.y = msg.pose.pose.position.y
        if not self.initialized:
            self.get_logger().info(f"Initial position received: x={self.x}, y={self.y}")
            self.initialized = True


    def pose_array_callback(self, msg):
        pose = msg.poses[6].position
        self.z = pose.z  # Update z position


    def execute_callback(self, goal_handle):
        """Stabilize the robot using a proportional controller."""
        if not self.initialized:
            self.get_logger().error("Odometry not initialized. Aborting action.")
            goal_handle.abort()
            return Godownint.Result()

        self.get_logger().info('Executing stabilization...')
        initial_x = self.x
        initial_y = self.y

        # P Controller Gains
        kp = 0.005  # Proportional gain, adjust based on your system

        self.stabilizing = True  # Flag to indicate stabilization process

        # Create a timer to periodically check the stabilization status
        rate = self.create_rate(10)  # 10 Hz loop rate
        power_msg = Vector3()
        power_msg.x = 0.0
        power_msg.y = 0.0
        power_msg.z = self.constant_z_force  # Still maintain Z force
        self.power.publish(power_msg)

        time.sleep(7)
        """
        while rclpy.ok():
            # Calculate errors in X and Y
            error_x = self.x - initial_x
            error_y = self.y - initial_y

            # Apply proportional control for X and Y stabilization
            force_x = -kp * error_x
            force_y = -kp * error_y

            # Apply constant Z force from the parameter
            power_msg = Vector3()
            power_msg.x = 0
            power_msg.y = 0
            power_msg.z = self.constant_z_force  # Constant Z force from parameter

            # Publish the stabilization force
            self.power.publish(power_msg)

            self.get_logger().info(
                f"Applying force: x={force_x:.3f}, y={force_y:.3f}, z={self.constant_z_force:.3f}"
            )
            if self.z < -3.6:
            # Check if stabilization is complete (e.g., Z reaches desired position)
                self.get_logger().info("Stabilization complete.")
                break
            # Sleep briefly to allow other events (non-blocking)
            rclpy.spin_once(self, timeout_sec=0.1)
        """

        # After stabilization, stop applying forces
        power_msg = Vector3()
        power_msg.x = 0.0
        power_msg.y = 0.0
        power_msg.z = 0.0  # Still maintain Z force
        self.power.publish(power_msg)

        # Return result to the client
        result = Godownint.Result()
        goal_handle.succeed()
        return result

def main(args=None):
    rclpy.init(args=args)

    node = GoDownNode()
    executor = MultiThreadedExecutor()
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
