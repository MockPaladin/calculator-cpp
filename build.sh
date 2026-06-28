#!/bin/sh

# format files
cd scripts
source format.sh

# build executable
cd scripts
source BUILD.sh
exitCode="$?"

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