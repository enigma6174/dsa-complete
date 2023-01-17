cmake_minimum_required(VERSION 3.24)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp main.cpp)

add_executable(ArrayList data_structures/array-list/main.cpp data_structures/array-list/ArrayList.cpp)
add_executable(LinkedList data_structures/linked-list/LinkedList.cpp data_structures/linked-list/main.cpp)
add_executable(DoublyLinkedList data_structures/doubly-linked-list/DoublyLinkedList.cpp data_structures/doubly-linked-list/main.cpp)

#add_executable(merge_sorted_arrays practice_problems/warm_up/arrays/merge_sorted_arrays.cpp)
#add_executable(remove_even_integer practice_problems/warm_up/arrays/remove_even_integer.cpp)
#add_executable(min_value practice_problems/warm_up/arrays/min_value.cpp)
#add_executable(two_sum practice_problems/warm_up/arrays/two_sum.cpp)

