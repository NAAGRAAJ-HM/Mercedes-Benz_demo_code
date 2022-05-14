cmake_minimum_required(VERSION 3.13)  # CMake version check

set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_C_COMPILER "/usr/bin/gcc")

project(solution)

set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(
SOURCE_FILES
main.c
test_cases.c
solution.c
)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(
solution ${SOURCE_FILES}
)
