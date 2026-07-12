#!/bin/sh

# format files
clang-format -style=file -i src/**/*.cpp include/**/*.hpp
# build executable
cd build
rm -rf CmakeCache.txt CMakeFiles/
cmake ..
cd ../
cmake --build build
exitCode="$?"
mv ./build/calculator ./bin/calculator > /dev/null 2>&1

if [ "${exitCode}" == 0 ]; then
  echo -e "\nBuild successful! \e[1mSource output:\e[0m"
  ./bin/calculator
  if [ "$?" == 0 ]; then
    echo -e "Process 'calculator' executed with exit code \e[32m0\e[0m."
  else
    echo -e "Process 'calculator' executed with exit code \e[31m$?\e[0m."
  fi
else
  echo
  echo -e "The build failed with exit code \e[31m${exitCode}\e[0m."
fi
