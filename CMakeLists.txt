# Minimum version is just the version
# of cmake that GitHub uses.
cmake_minimum_required(VERSION 3.31.6)

project(calculator LANGUAGES CXX)

#set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -O2")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(calculator
  src/calculator.cpp
  src/literal.cpp
  src/symbol.cpp
  src/integrate.cpp
  src/main.cpp
  src/expression.cpp
  src/expressionNode.cpp
  src/integrate/tanhSinh.cpp
  src/integrate/monteCarlo.cpp
)

target_include_directories(calculator
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include
)
