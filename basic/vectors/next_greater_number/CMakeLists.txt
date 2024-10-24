cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(NextGreaterNumber VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(next_greater_number next_greater_number.cpp)
