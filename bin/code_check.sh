#!/bin/sh
set -e
  pip3 install --user -U pip && \
  sudo pip3 install --user -U pip && \
  pip3 install --user -r static-requirements.txt && \
  sudo pip3 install --user -r static-requirements.txt && \
  black python/iqtlabs/qa_*
