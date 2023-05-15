#!/bin/sh
set -e
export CXXFLAGS="-I /var/empty/local/include/ -L /var/empty/local/lib/"
cppcheck --verbose --language=c++ lib/* && \
  pip3 install --user -r codecheck-requirements.txt && \
  find python -name qa\* -exec pytype {} \; && \
  find python -name qa\* -exec black {} \; && \
  rm -rf build && mkdir build && cd build && cmake .. && make && sudo make install && sudo ldconfig && make test ARGS="--verbose --timeout 180" && cd ..
