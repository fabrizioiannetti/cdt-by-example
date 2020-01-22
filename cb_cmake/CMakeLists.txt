cmake_minimum_required(VERSION 3.10)

option(EXTENDED "Build the extended version" OFF)

add_subdirectory(lib)

add_executable(test test.cpp)
target_link_libraries(test PRIVATE test_lib)

if (EXTENDED)
  target_compile_definitions(test PUBLIC EXTENDED_VERSION)
endif()
