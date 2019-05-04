cmake_minimum_required(VERSION 3.14)
project(trabalho01)

set(CMAKE_CXX_STANDARD 14)

add_executable(trabalho01 main.cpp check_it.cpp check_it.h algorithms.h bubble_sort.cpp insertion_sort.cpp selection_sort.cpp merge_sort.cpp quick_sort.cpp counting_sort.cpp maximum.cpp bucket_sort.cpp better_counting_sort.cpp)