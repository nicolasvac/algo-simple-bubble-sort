cmake_minimum_required(VERSION 3.25)
project(algo_simple_bubble_sort C)

set(CMAKE_C_STANDARD 11)

add_executable(algo_simple_bubble_sort
        main.c bubble_sort.c bubble_sort.h)
