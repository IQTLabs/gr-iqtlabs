#!/bin/sh
set -e
bin/check_blocks.py && \
  cppcheck --verbose --language=c++ --error-exitcode=1 --suppress=preprocessorErrorDirective --suppress=syntaxError --inline-suppr --enable=performance,portability --force lib/*.h lib/*.cc include/iqtlabs/*h && \
  pip3 install --user -r codecheck-requirements.txt && \
  black python/iqtlabs/qa_* && \
  ./bin/clonedeps.sh && \
  rm -rf build && mkdir build && cd build && cmake .. && make -j $(nproc) && sudo make install && sudo ldconfig && \
  sudo make test ARGS="--verbose --timeout 180 --test-regex qa_retune_fft" && \
  make test ARGS="--verbose --timeout 180 --exclude-regex qa_retune_fft" && \
  cd .. && pytype -d attribute-error python/iqtlabs/qa_*
