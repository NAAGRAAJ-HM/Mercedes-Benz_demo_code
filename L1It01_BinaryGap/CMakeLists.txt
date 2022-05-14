cmake_minimum_required(VERSION 3.16.3)

project(
   tst_Solution.out
   VERSION 0.1
)

add_definitions(
   -ggdb
   -std=c++23
   -Wall
   -Werror
   -Wextra
   -pedantic
   -Wuninitialized
)

add_executable(
   tst_Solution.out
   Solution.cpp
   tst_Solution.cpp
)
