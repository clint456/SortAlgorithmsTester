# 设置最低 CMake 版本
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(SortAlgorithmsTester)

# 设置 C++ 标准为 C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置 include 目录，使得头文件可以被引用
include_directories(include)

# 添加可执行文件
add_executable(SortAlgorithmsTester src/main.cpp src/BubbleSort.cpp src/QuickSort.cpp)

# 可选：启用测试功能
enable_testing()


# 可以选择添加编译选项，例如开启编译优化
# target_compile_options(SortAlgorithmsTester PRIVATE -O2)

# 如果需要链接其他库，可以在这里进行链接，例如：pthread
# target_link_libraries(SortAlgorithmsTester PRIVATE pthread)