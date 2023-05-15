#!/bin/bash
# https://wiki.gnuradio.org/index.php?title=UbuntuInstall#Install_Dependencies
set -e
sudo apt-get -y update && \
  sudo apt-get -y install git cmake g++ libboost-all-dev libgmp-dev swig python3-numpy \
    python3-mako python3-sphinx python3-lxml doxygen libfftw3-dev libsdl1.2-dev \
    libgsl-dev libqwt-qt5-dev libqt5opengl5-dev python3-pyqt5 liblog4cpp5-dev \
    libzmq3-dev python3-yaml python3-click python3-click-plugins python3-zmq \
    python3-scipy python3-gi python3-gi-cairo gir1.2-gtk-3.0 libcodec2-dev \
    libgsm1-dev libusb-1.0-0 libusb-1.0-0-dev libudev-dev pybind11-dev \
    python3-matplotlib libsndfile1-dev python3-pip libsoapysdr-dev soapysdr-tools \
    python3-numpy python3-pandas libsoapysdr-dev libboost-all-dev libzstd-dev libuhd-dev \
    python3-packaging cppcheck libopencv-dev && \
    git clone --recursive https://github.com/gnuradio/volk && cd volk && mkdir build && cd build && cmake -DCMAKE_BUILD_TYPE=Release -DPYTHON_EXECUTABLE=/usr/bin/python3 .. && make -j "$(nproc)" && sudo make install && sudo ldconfig && cd ../.. && \
    git clone https://github.com/gnuradio/gnuradio -b maint-3.9 && cd gnuradio && mkdir build && cd build && CMAKE_CXX_STANDARD=17 cmake -DENABLE_DEFAULT=OFF -DENABLE_GRC=ON -DENABLE_PYTHON=ON -DENABLE_GNURADIO_RUNTIME=ON -DENABLE_GR_BLOCKS=ON -DENABLE_GR_FFT=ON -DENABLE_GR_FILTER=ON -DENABLE_GR_ANALOG=ON -DENABLE_GR_NETWORK=ON .. && make -j "$(nproc)" && sudo make install && sudo ln -s /usr/local/lib/python3/dist-packages/* /usr/local/lib/python3.*/dist-packages && sudo ldconfig && cd ../.. &&
    python3 -c "import gnuradio"
