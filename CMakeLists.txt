cmake_minimum_required(VERSION 3.7)
project(LearningCpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(LearningCpp ${SOURCE_FILES})
add_executable(Pythagoras src/pythagoras.cpp)
add_executable(Greater src/greater.cpp)
add_executable(StringsConcat src/strings/concat.cpp)
add_executable(AscciArt src/strings/ascii_art.cpp)
add_executable(Factorial src/factorial.cpp)
add_executable(ReverseString src/strings/reverse.cpp)

add_executable(Trinaries src/exercism/trinaries.cpp)
