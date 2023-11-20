#!/bin/bash
# https://wiki.gnuradio.org/index.php?title=UbuntuInstall#Install_Dependencies
set -e
sudo apt-get -y update && \
    sudo apt-get -y install \
	 cmake \
	 cppcheck \
	 doxygen \
	 g++ \
	 gir1.2-gtk-3.0 \
	 git \
	 libboost-all-dev \
	 libboost-all-dev \
	 libcodec2-dev \
	 libfftw3-dev \
	 libgmp-dev \
	 libgsl-dev \
	 libgsm1-dev \
	 liblog4cpp5-dev \
	 libopencv-dev \
	 libqt5opengl5-dev \
	 libqwt-qt5-dev \
	 libsdl1.2-dev \
	 libsndfile1-dev \
	 libsoapysdr-dev \
	 libsoapysdr-dev \
	 libudev-dev \
	 libuhd-dev \
	 libusb-1.0-0 \
	 libusb-1.0-0-dev \
	 libzmq3-dev \
	 libzstd-dev \
	 pybind11-dev \
	 python3-click \
	 python3-click-plugins \
     python3-flask \
	 python3-gi \
	 python3-gi-cairo \
	 python3-lxml \
	 python3-mako \
	 python3-matplotlib \
	 python3-numpy \
	 python3-packaging \
	 python3-pandas \
	 python3-pip \
	 python3-pyqt5 \
	 python3-scipy \
	 python3-sphinx \
	 python3-yaml \
	 python3-zmq \
	 soapysdr-tools \
	 swig \
     wget \
    && \
    git clone --recursive https://github.com/gnuradio/volk -b v3.0.0 && cd volk && mkdir build && cd build && cmake -DCMAKE_BUILD_TYPE=Release -DPYTHON_EXECUTABLE=/usr/bin/python3 .. && make -j "$(nproc)" && sudo make install && sudo ldconfig && cd ../.. && \
    git clone https://github.com/gnuradio/gnuradio -b maint-3.9 && cd gnuradio && mkdir build && cd build && CMAKE_CXX_STANDARD=17 cmake -DENABLE_DEFAULT=OFF -DENABLE_GRC=ON -DENABLE_PYTHON=ON -DENABLE_GNURADIO_RUNTIME=ON -DENABLE_GR_BLOCKS=ON -DENABLE_GR_FFT=ON -DENABLE_GR_FILTER=ON -DENABLE_GR_ANALOG=ON -DENABLE_GR_NETWORK=ON .. && make -j "$(nproc)" && sudo make install && sudo ln -s /usr/local/lib/python3/dist-packages/* /usr/local/lib/python3.*/dist-packages && sudo ldconfig && cd ../.. &&
    python3 -c "import gnuradio"
