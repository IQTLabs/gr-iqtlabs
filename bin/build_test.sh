#!/bin/sh
set -e
export GRC_BLOCKS_PATH=/var/empty/local/share/gnuradio/grc/blocks
export CXXFLAGS="-I /var/empty/local/include/ -L /var/empty/local/lib/"
cppcheck --verbose --language=c++ lib/* && \
  pip3 install --user -r codecheck-requirements.txt && \
  find python -name qa\* -exec pytype {} \; && \
  find python -name qa\* -exec black {} \; && \
  rm -rf build && mkdir build && cd build && cmake .. && make && make test ARGS="--verbose --timeout 90" && sudo make install && sudo ldconfig && cd .. && \
  cd test_flow_graphs && rm -rf test && mkdir test && cd test && testdir=$(pwd) && \
  for g in ../*grc ; do
      cd $testdir && echo testing: $g && \
      rm -rf $testdir/* && cp $g test.grc && grcc test.grc && \
      rm -rf $testdir/* && cp $g test.grc && sed -i 's/output_language: python/output_language: cpp/g' test.grc && grcc -o test test.grc && cd test/*/build && cmake .. && make VERBOSE=1
  done
