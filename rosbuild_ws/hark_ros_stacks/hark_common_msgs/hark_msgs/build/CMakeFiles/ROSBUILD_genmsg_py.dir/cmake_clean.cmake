FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../msg_gen"
  "../srv_gen"
  "../src/hark_msgs/msg"
  "../src/hark_msgs/srv"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/hark_msgs/msg/__init__.py"
  "../src/hark_msgs/msg/_HarkSrcWaveVal.py"
  "../src/hark_msgs/msg/_HarkWaveVal.py"
  "../src/hark_msgs/msg/_HarkJuliusSrcVal.py"
  "../src/hark_msgs/msg/_HarkSrcWave.py"
  "../src/hark_msgs/msg/_HarkSrcFFTVal.py"
  "../src/hark_msgs/msg/_HarkInt.py"
  "../src/hark_msgs/msg/_HarkWave.py"
  "../src/hark_msgs/msg/_HarkJulius.py"
  "../src/hark_msgs/msg/_HarkFeatureVal.py"
  "../src/hark_msgs/msg/_HarkSrcFeatureMFM.py"
  "../src/hark_msgs/msg/_HarkSrcFFT.py"
  "../src/hark_msgs/msg/_HarkJuliusSrc.py"
  "../src/hark_msgs/msg/_HarkFFT.py"
  "../src/hark_msgs/msg/_HarkSourceVal.py"
  "../src/hark_msgs/msg/_HarkFFTVal.py"
  "../src/hark_msgs/msg/_HarkSource.py"
  "../src/hark_msgs/msg/_HarkSrcFeatureMFMVal.py"
  "../src/hark_msgs/msg/_HarkSrcFeature.py"
  "../src/hark_msgs/msg/_HarkFeature.py"
  "../src/hark_msgs/msg/_HarkSrcFeatureVal.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
