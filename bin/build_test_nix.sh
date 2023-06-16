#!/bin/sh
set -e
export CXXFLAGS="-I /var/empty/local/include/ -L /var/empty/local/lib/"
cppcheck --verbose --language=c++ lib/* && \
  pip3 install --user -r codecheck-requirements.txt && \
  rm -rf build && mkdir build && cd build && cmake .. && make && sudo make install && sudo ldconfig && PYTHONPATH=$HOME/.local/lib/python3.10/site-packages:$PYTHONPATH make test ARGS="--verbose --timeout 180" && cd ..