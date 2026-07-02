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

# Force clean the repo so it has to recompile everything
cd build
rm -rf CMakeCache.txt CMakeFiles/
cmake ..
cd ../

cmake --build build
mv ./build/calculator ./bin/calculator > /dev/null 2>&1