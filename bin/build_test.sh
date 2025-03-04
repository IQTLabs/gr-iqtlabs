#!/bin/sh
set -e
# TODO: https://github.com/gnuradio/gnuradio/issues/7558
# bin/check_blocks.py && \
  cppcheck --verbose --language=c++ --error-exitcode=1 --suppress=preprocessorErrorDirective --suppress=syntaxError --inline-suppr --enable=performance,portability --force lib/*.h lib/*.cc include/iqtlabs/*h && \
  pip3 install --user -U pip && \
  sudo pip3 install --user -U pip && \
  pip3 install --user -r codecheck-requirements.txt && \
  sudo pip3 install --user -r codecheck-requirements.txt && \
  ./bin/clonedeps.sh && \
  rm -rf build && mkdir build && cd build && cmake .. && make -j $(nproc) && sudo make install && sudo ldconfig && sudo SIGMF_VALIDATE=$SIGMF_VALIDATE make test ARGS="--verbose --timeout 180" && cd ..
