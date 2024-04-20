#!/bin/sh
set -e
git clone https://github.com/google/flatbuffers -b v24.3.25
git clone https://github.com/nlohmann/json -b v3.11.3
git clone https://github.com/deepsig/libsigmf -b v1.0.2
mkdir -p flatbuffers/build
cd flatbuffers/build
cmake ..
make -j $(nproc)
sudo make install
cd ../..
mkdir -p json/build
cd json/build
cmake ..
make -j $(nproc)
sudo make install
cd ../..
mkdir -p libsigmf/build
cd libsigmf/build
cmake -DUSE_SYSTEM_JSON=ON -DUSE_SYSTEM_FLATBUFFERS=ON ..
make -j $(nproc)
sudo make install
cd ../..
if [ "$(which vulkaninfo)" != "" ] ; then
  git clone https://github.com/DTolm/VkFFT -b v1.3.4
  mkdir -p VkFFT/build
  cd VkFFT/build
  CMAKE_BUILD_TYPE=Release cmake -DGLSLANG_GIT_TAG=13.0.0 ..
  make -j $(nproc)
  sudo make install
  cd ../..
fi
