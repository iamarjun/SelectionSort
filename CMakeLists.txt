cmake_minimum_required(VERSION 3.9)
project(SelectionSort C)

set(CMAKE_C_STANDARD 11)

add_executable(SelectionSort main.c selectionsort.h selectionsortrecursion.h)