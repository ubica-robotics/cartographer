#ifndef CARTOGRAPHER_ADAPTIVE_SCAN_MATCHING_DATA_H
#define CARTOGRAPHER_ADAPTIVE_SCAN_MATCHING_DATA_H

namespace cartographer {
namespace sensor {

struct AdaptiveScanMatchingData {
  common::Time time;
  bool scan_matching;
};

}  // namespace sensor
}  // namespace cartographer

#endif //CARTOGRAPHER_ADAPTIVE_SCAN_MATCHING_DATA_H
