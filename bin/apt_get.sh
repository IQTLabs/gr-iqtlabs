#!/bin/sh
sudo apt-get update && \
  sudo apt-get -yq install \
    build-essential \
    cmake \
    cppcheck \
    gnuradio-dev \
    libboost-all-dev \
    libgnuradio-uhd\* \
    libopencv-dev \
    libsndfile-dev \
    libsoapysdr-dev \
    libuhd-dev \
    libvulkan-dev \
    libzstd-dev \
    mesa-vulkan-drivers \
    python3-flask \
    python3-numpy \
    python3-packaging \
    python3-pandas \
    vulkan-tools \
    wget && \
  sudo pip3 install zstandard clang-format

