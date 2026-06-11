cmake_minimum_required(VERSION 4.3)

# project name and language
project(calculator LANGUAGES CXX)

# C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(calculator # executable name
  # source files
  src/main.cpp
  src/calculator.cpp
)

# tell CMake where the includes are
target_include_directories(calculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)