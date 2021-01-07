project(first_project) 							
cmake_minimum_required(VERSION 3.1) 	
set(CMAKE_CXX_STANDARD 14) 					

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/src)

add_library(tools src/funciones_fecha.cc)

add_executable(main src/fecha.cc)

target_link_libraries(main tools)