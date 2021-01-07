project(first_project) 							# Mandatory 
cmake_minimum_required(VERSION 3.1) 	# Mandatory 
set(CMAKE_CXX_STANDARD 14) 						# Use c++14

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# create library " libtools "
add_library(tools src/funciones_fecha.cc)

# add executable main
add_executable(main src/fecha.cc)

# tell the linker to bind these objects together
target_link_libraries(main tools)