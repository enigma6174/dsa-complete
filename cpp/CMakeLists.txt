cmake_minimum_required(VERSION 3.24)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp main.cpp)

add_executable(arraylist data_structures/arraylist/main.cpp data_structures/arraylist/ArrayList.h data_structures/arraylist/ArrayList.cpp)

#add_executable(merge_sorted_arrays practice_problems/warm_up/arrays/merge_sorted_arrays.cpp)
#add_executable(remove_even_integer practice_problems/warm_up/arrays/remove_even_integer.cpp)
#add_executable(min_value practice_problems/warm_up/arrays/min_value.cpp)
#add_executable(two_sum practice_problems/warm_up/arrays/two_sum.cpp)