#!/bin/sh

cd scripts
source build.sh
exitCode="$?"

if [ "${exitCode}" == 0 ]; then
  ./bin/calculator
else
  echo
  echo -e "The build failed with exit code \e[31m${exitCode}\e[0m."
fi