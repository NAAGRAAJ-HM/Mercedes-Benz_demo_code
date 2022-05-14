cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_C_COMPILER "/usr/bin/gcc")

project(solution)

add_compile_options(
   -O0
   -ggdb
   -Wall
   -pedantic
   -std=c2x
)

set(
   SOURCE_FILES
   main.c
   solution.c
   test_cases.c
)

add_executable(
   solution
   ${SOURCE_FILES}
)
