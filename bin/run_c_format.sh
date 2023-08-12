#!/bin/bash

set -e

for dir in $* ; do
    clang-format --style=llvm -i "$dir"/*.[hc]*
    if [ -f "$dir/CMakeLists.txt" ] ; then
        cmake-format -i "$dir/CMakeLists.txt"
    fi
done
if [ "$(git diff -u)" != "" ] ; then
    git diff -u
    exit 1
fi
exit 0
