cmake_minimum_required(VERSION 3.7)
project(LearningCpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(LearningCpp ${SOURCE_FILES})
add_executable(Pythagoras src/pythagoras.cpp)
add_executable(Greater src/greater.cpp)