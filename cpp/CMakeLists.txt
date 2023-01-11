cmake_minimum_required(VERSION 3.24)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp main.cpp)

add_executable(arraylist data_structures/arraylist/main.cpp data_structures/arraylist/ArrayList.h data_structures/arraylist/ArrayList.cpp)