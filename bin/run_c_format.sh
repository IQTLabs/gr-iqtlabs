#!/bin/bash

set -e

for dir in $* ; do
    for cfile in "$dir"/*.[hc]* ; do
        if [ -f "$cfile" ] ; then
            clang-format --style=llvm -i $cfile
        fi
    done
    if [ -f "$dir/CMakeLists.txt" ] ; then
        cmake-format -i "$dir/CMakeLists.txt"
    fi
done
if [ "$(git diff -u)" != "" ] ; then
    git diff -u
    exit 1
fi
exit 0
