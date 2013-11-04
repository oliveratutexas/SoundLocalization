FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../msg_gen"
  "../srv_gen"
  "../src/hark_msgs/msg"
  "../src/hark_msgs/srv"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/hark_msgs/HarkSrcWaveVal.h"
  "../msg_gen/cpp/include/hark_msgs/HarkWaveVal.h"
  "../msg_gen/cpp/include/hark_msgs/HarkJuliusSrcVal.h"
  "../msg_gen/cpp/include/hark_msgs/HarkSrcWave.h"
  "../msg_gen/cpp/include/hark_msgs/HarkSrcFFTVal.h"
  "../msg_gen/cpp/include/hark_msgs/HarkInt.h"
  "../msg_gen/cpp/include/hark_msgs/HarkWave.h"
  "../msg_gen/cpp/include/hark_msgs/HarkJulius.h"
  "../msg_gen/cpp/include/hark_msgs/HarkFeatureVal.h"
  "../msg_gen/cpp/include/hark_msgs/HarkSrcFeatureMFM.h"
  "../msg_gen/cpp/include/hark_msgs/HarkSrcFFT.h"
  "../msg_gen/cpp/include/hark_msgs/HarkJuliusSrc.h"
  "../msg_gen/cpp/include/hark_msgs/HarkFFT.h"
  "../msg_gen/cpp/include/hark_msgs/HarkSourceVal.h"
  "../msg_gen/cpp/include/hark_msgs/HarkFFTVal.h"
  "../msg_gen/cpp/include/hark_msgs/HarkSource.h"
  "../msg_gen/cpp/include/hark_msgs/HarkSrcFeatureMFMVal.h"
  "../msg_gen/cpp/include/hark_msgs/HarkSrcFeature.h"
  "../msg_gen/cpp/include/hark_msgs/HarkFeature.h"
  "../msg_gen/cpp/include/hark_msgs/HarkSrcFeatureVal.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
