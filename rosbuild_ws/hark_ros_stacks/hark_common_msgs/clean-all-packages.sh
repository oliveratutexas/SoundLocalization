#!/bin/sh

#echo $(ls -d */)

for package in $(ls -d */)
do
  
  if [ ${package} != "build/" ] && [ ${package} != "bin/" ]
  then
  
    echo " Cleaning package: ${package}"
    cd ${package}
    make -s clean
    rm -rf build lib
    # ROS does not do a good job at removing files generated by dynamic config
    rm -f src/${package}/cfg/__init__.py
    rm -f src/${package}/cfg/*Config.py
    rm -f src/${package}/__init__.py
    rm -f src/${package}/__init__.pyc
    rmdir --ignore-fail-on-non-empty src/${package}/cfg
    rmdir --ignore-fail-on-non-empty src/${package}
    rm -f cfg/*.cfgc
    rm -f cfg/cpp/${package}/*Config.h
    rmdir --ignore-fail-on-non-empty cfg/cpp/${package}
    rmdir --ignore-fail-on-non-empty cfg/cpp
    cd ..
    
  fi
  
done
    