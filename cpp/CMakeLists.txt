cmake_minimum_required(VERSION 3.24)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp main.cpp)

add_executable(arraylist arraylist/main.cpp arraylist/ArrayList.h arraylist/ArrayList.cpp)