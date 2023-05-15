#!/bin/bash
set -e
python -m venv .venv
source .venv/bin/activate
python -m pip install -r codecheck-requirements.txt
export GRC_BLOCKS_PATH=/var/empty/local/share/gnuradio/grc/blocks
export CXXFLAGS="-I /var/empty/local/include/ -L /var/empty/local/lib/"
cppcheck --verbose --language=c++ lib/* && \
  rm -rf build && mkdir build && cd build && cmake .. && make && \
  sed -i "s/\usr\/bin\/python3/usr\/bin\/env python3/g" python/iqtlabs/qa_*sh && \
  cat python/iqtlabs/qa_*sh && \
  make test ARGS="--verbose --timeout 180" && sudo make install && sudo ldconfig && cd .. && \
  cd test_flow_graphs && rm -rf test && mkdir test && cd test && testdir=$(pwd) && \
  for g in ../*grc ; do
      cd $testdir && echo testing: $g && \
      rm -rf $testdir/* && cp $g test.grc && grcc test.grc && \
      rm -rf $testdir/* && cp $g test.grc && sed -i 's/output_language: python/output_language: cpp/g' test.grc && grcc -o test test.grc && cd test/*/build && cmake .. && make VERBOSE=1
  done
