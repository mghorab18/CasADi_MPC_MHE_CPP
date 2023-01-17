/*
 * @Author: Wei Luo
 * @Date: 2023-01-05 22:35:40
 * @LastEditors: Wei Luo
 * @LastEditTime: 2023-01-17 20:41:13
 * @Note: Note
 */

#include "dmoc_quadrotor.hpp"

int main() {
  const double quadrotor_mass = 1.659;
  const double g_acceleration = 9.8066;
  const double dt = 0.33;
  const int horizon = 20;
  std::vector<double> inertia = {0.01576, 0.01540, 0.01948};
  const double frame_size = 0.33;
  const double motor_torque_const = 0.013;

  auto dmoc_uav_handle = std::make_shared<DMOCUAV>(
      DMOCUAV(dt, horizon, quadrotor_mass, inertia, frame_size,
              motor_torque_const, g_acceleration));

  dmoc_uav_handle->initialization_formulation();
}