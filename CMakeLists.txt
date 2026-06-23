# Since I'm too lazy to actually figure out what
# the minimum version is, I'll just make it this.
cmake_minimum_required(VERSION 4.3.0)

project(calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(calculator
  src/calculator.cpp
  src/integrate.cpp
  src/main.cpp
  src/integrate/tanhSinh.cpp
  src/integrate/monteCarlo.cpp
)

target_include_directories(calculator
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include
)