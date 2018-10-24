cmake_minimum_required(VERSION 2.8.9)
# Set the output folder where your program will be created
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_BUILD_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set (CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-std=c++14")

project(constructorexample)
#Bring the headers, such as Student.h into the project
include_directories(ConstructorExample/inc)
#Can manually add the sources using the set command as follows:
set(SOURCES ConstructorExample/src/constructor_assignment.cpp)
add_executable(constructorexample ${SOURCES})

project(FriendFunc_LambdaExpr)
#Bring the headers, such as Student.h into the project
include_directories(FriendFunction_class_example_lambdaexpression/inc)
#Can manually add the sources using the set command as follows:
set(SOURCES FriendFunction_class_example_lambdaexpression/src/friendfuction_friendclass_lambdaexperession)
add_executable(FriendFunc_LambdaExpr ${SOURCES})

project(FunctionPointer_Callbacks_Example)
#Bring the headers, such as Student.h into the project
include_directories(FunctionPointer_Callbacks_Example/inc)
#Can manually add the sources using the set command as follows:
set(SOURCES FunctionPointer_Callbacks_Example/src/funcptr_callbacks_example)
add_executable(FunctionPointer_Callbacks_Example ${SOURCES})

project(Inheritance_uniforinitialization)
#Bring the headers, such as Student.h into the project
include_directories(Inheritance_uniforinitialization/inc)
#Can manually add the sources using the set command as follows:
set(SOURCES Inheritance_uniforinitialization/src/inheritance_example)
add_executable(Inheritance_uniforinitialization ${SOURCES})

project(SharedPointerExample)
#Bring the headers, such as Student.h into the project
include_directories(SharedPointerExample/inc)
#Can manually add the sources using the set command as follows:
set(SOURCES SharedPointerExample/src/sharedPointerExample)
find_package(Threads REQUIRED)
add_executable(SharedPointerExample ${SOURCES})
target_link_libraries (SharedPointerExample ${CMAKE_THREAD_LIBS_INIT})

project(TemplateExample)
#Bring the headers, such as Student.h into the project
include_directories(TemplateExample/inc)
#Can manually add the sources using the set command as follows:
set(SOURCES TemplateExample/src/template_example)
add_executable(TemplateExample ${SOURCES})

project(ThreadsExample)
set(SOURCES Threads/src/Thread_Concept)
find_package(Threads REQUIRED)
add_executable(ThreadsExample ${SOURCES})
target_link_libraries (ThreadsExample ${CMAKE_THREAD_LIBS_INIT})

project(Vector_Map_Example)
set(SOURCES Vector_Map_Example/src/vector_map_example)
add_executable(Vector_Map_Example ${SOURCES})



















