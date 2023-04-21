#!/bin/sh
sudo apt-get update && \
  sudo apt-get -yq install gnuradio-dev build-essential cmake python3-numpy python3-pandas libsndfile-dev libsoapysdr-dev libboost-all-dev libgnuradio-uhd\* libzstd-dev libuhd-dev python3-packaging cppcheck libopencv-dev
