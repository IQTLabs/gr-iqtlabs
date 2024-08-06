#!/bin/sh
set -e
bin/check_blocks.py && \
  cppcheck --verbose --language=c++ --error-exitcode=1 --suppress=preprocessorErrorDirective --suppress=syntaxError --inline-suppr --enable=performance,portability --force lib/*.h lib/*.cc include/iqtlabs/*h && \
  pip3 install --user -r codecheck-requirements.txt && \
  sudo pip3 install --user -r codecheck-requirements.txt && \
  black python/iqtlabs/qa_* && \
  ./bin/clonedeps.sh && \
  rm -rf build && mkdir build && cd build && cmake .. && make -j $(nproc) && sudo make install && sudo ldconfig && sudo SIGMF_VALIDATE=$(sudo which sigmf_validate) make test ARGS="--verbose --timeout 180" && cd .. && \
  PYTHONPATH=python/iqtlabs pytype -d attribute-error python/iqtlabs/qa_*
