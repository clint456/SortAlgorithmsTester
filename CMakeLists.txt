cmake_minimum_required(VERSION 3.10)

project(SortAlgorithmsTester)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含头文件目录
include_directories(include)

# 添加源文件
add_executable(SortAlgorithmsTester 
                src/main.cpp 
                src/BubbleSort.cpp )
                # src/QuickSort.cpp 
                # src/HeapSort.cpp
                # src/InsertionSort.cpp
                # src/ShellSort.cpp 
                # src/SelectionSort.cpp
                # src/MergeSort.cpp
                # src/RadixSort.cpp 
                # src/CountingSort.cpp 
                # src/BucketSort.cpp)
