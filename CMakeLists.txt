cmake_minimum_required(VERSION 3.10)

project(Hardware_Monitor)

set(CMAKE_CXX_STANDARD 17)

include_directories(src/Monitor)

# Add the executable and specify the source files
add_executable(Hardware_Monitor src/main.cpp src/Monitor/Utility.cpp)