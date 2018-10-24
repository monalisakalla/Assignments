cmake_minimum_required(VERSION 2.8.9)
project(constructorexample)
# Set the output folder where your program will be created
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_BUILD_DIRECTORY ${CMAKE_BINARY_DIR}/build)
#Bring the headers, such as Student.h into the project
include_directories(inc)

#Can manually add the sources using the set command as follows:
set(SOURCES src/constructor_assignment.cpp)

add_executable(constructorexample ${SOURCES})
