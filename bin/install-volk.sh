#!/bin/sh
git clone --recursive https://github.com/gnuradio/volk -b v3.0.0 && cd volk && mkdir build && cd build && CMAKE_CXX_STANDARD=17 cmake -DCMAKE_BUILD_TYPE=Release -DPYTHON_EXECUTABLE=/usr/bin/python3 .. && make -j "$(nproc)" && sudo make install && sudo ldconfig && cd ../..
