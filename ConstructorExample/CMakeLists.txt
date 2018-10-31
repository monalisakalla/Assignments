cmake_minimum_required(VERSION 2.8.9)
project(constructorexample)

#Bring the headers, such as Student.h into the project
include_directories(inc)

#Can manually add the sources using the set command as follows:
set(SOURCES src/constructor_assignment.cpp)

add_executable(constructorexample ${SOURCES})
