cmake_minimum_required(VERSION 3.10)

add_executable(test test.cpp lib.cpp)
target_compile_definitions(test PUBLIC EXTENDED_VERSION)
