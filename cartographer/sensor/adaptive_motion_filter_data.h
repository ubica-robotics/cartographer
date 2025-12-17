#ifndef CARTOGRAPHER_ADAPTIVE_MOTION_FILTER_DATA_H
#define CARTOGRAPHER_ADAPTIVE_MOTION_FILTER_DATA_H

namespace cartographer {
namespace sensor {

struct AdaptiveMotionFilterData {
  common::Time time;
  float max_time_seconds;
  float max_distance_meters;
  float max_angle_radians;
};

}  // namespace sensor
}  // namespace cartographer

#endif //CARTOGRAPHER_ADAPTIVE_MOTION_FILTER_DATA_H
