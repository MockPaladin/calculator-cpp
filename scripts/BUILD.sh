#!/bin/sh

# Create build directory if it doesn't exist
cd ../
if [ -d "/build" ]; then
  echo "Build is not a directory."
  mkdir -p build
  cd build
  cmake .. > /dev/null
  cd ../
fi

cmake --build build
mv ./build/calculator ./bin/calculator > /dev/null 2>&1