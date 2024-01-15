cmake_minimum_required(VERSION 3.10)

project(matmul)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_C_FLAGS "-Wall -O2")
set(CMAKE_CXX_FLAGS "-Wall -O2")

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
	add_compile_definitions(DEBUG)
endif()

option(BUILD_TESTS "Build tests" OFF)

add_subdirectory(src)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
	add_subdirectory(tests)
endif()

