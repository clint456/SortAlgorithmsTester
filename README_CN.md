# 排序算法框架

该项目包含了多种排序算法的实现，使用 C++ 编写。它提供了一个框架，用于测试和比较不同排序算法在小规模数据上的正确性和在大规模数据上的性能。已实现的排序算法包括：

- 冒泡排序
- 快速排序
- 堆排序
- 插入排序
- 希尔排序
- 选择排序
- 归并排序
- 基数排序
- 计数排序
- 桶排序

## 特性

- **正确性测试**：每个排序算法都会测试其是否能正确排序一个数组。
- **性能测试**：对算法进行基准测试，比较它们在大数据集上的执行时间。
- **模块化设计**：每个排序算法都实现为一个独立的类，并遵循统一的接口。

## 包含的算法

### 1. **冒泡排序 (Bubble Sort)**  
一种简单的比较排序算法，依次比较相邻元素，如果顺序错误则交换它们。这个过程会重复进行，直到整个数组排序完成。

### 2. **快速排序 (Quick Sort)**  
一种分治算法，通过选择一个枢纽元素，将数组分成两个子数组，然后递归地对两个子数组进行排序。

### 3. **堆排序 (Heap Sort)**  
一种基于比较的排序算法，首先构建一个二叉堆，然后通过反复从堆中提取最大（或最小）元素来排序数组。

### 4. **插入排序 (Insertion Sort)**  
一种简单的比较排序算法，它将每个元素插入到已经排好序的部分中，直到整个数组排序完成。

### 5. **希尔排序 (Shell Sort)**  
插入排序的一种改进算法，通过逐步减小元素之间的间隔，允许交换远离的元素，从而加速排序过程。

### 6. **选择排序 (Selection Sort)**  
一种比较排序算法，通过反复选择未排序部分中的最小（或最大）元素，并将其交换到已排序部分的末尾。

### 7. **归并排序 (Merge Sort)**  
一种分治算法，将数组分为两半，分别对两半进行排序，然后将两部分合并。

### 8. **基数排序 (Radix Sort)**  
一种非比较排序算法，通过逐位（从最低位到最高位）排序数字的各个数字来实现排序。

### 9. **计数排序 (Counting Sort)**  
一种非比较排序算法，通过统计每个元素的出现次数，然后根据统计结果将元素放回正确位置。

### 10. **桶排序 (Bucket Sort)**  
一种分布式排序算法，将数组分成若干桶，并分别对桶中的元素进行排序，最后合并桶内排序后的元素。

## 项目结构

```
/SortingAlgorithmsTester
│
├── /include          # 排序算法的头文件
│   ├── Sorter.h      # 所有排序算法的抽象基类
│   ├── BubbleSort.h  # BubbleSort 类的头文件
│   ├── QuickSort.h   # QuickSort 类的头文件
│   ├── HeapSort.h    # HeapSort 类的头文件
│   ├── InsertionSort.h
│   ├── ShellSort.h
│   ├── SelectionSort.h
│   ├── MergeSort.h
│   ├── RadixSort.h
│   ├── CountingSort.h
│   └── BucketSort.h  # BucketSort 类的头文件
│
├── /src              # 排序算法的源文件
│   ├── main.cpp      # 程序入口，执行测试
│   ├── BubbleSort.cpp
│   ├── QuickSort.cpp
│   ├── HeapSort.cpp
│   ├── InsertionSort.cpp
│   ├── ShellSort.cpp
│   ├── SelectionSort.cpp
│   ├── MergeSort.cpp
│   ├── RadixSort.cpp
│   ├── CountingSort.cpp
│   └── BucketSort.cpp
│
└── CMakeLists.txt    # CMake 构建文件
```

## 环境要求

- C++11 或更高版本
- CMake 3.10 或更高版本（用于构建项目）

## 构建说明

1. 克隆该仓库：

   ```bash
   git clone https://github.com/yourusername/sorting-algorithms.git
   cd sorting-algorithms
   ```

2. 创建构建目录，并使用 CMake 生成构建文件：

   ```bash
   mkdir build
   cd build
   cmake ..
   ```

3. 构建项目：

   ```bash
   cmake --build .
   ```

4. 运行程序：

   ```bash
   ./SortingAlgorithmsTester
   ```

   程序将执行所有排序算法，进行正确性测试，并输出性能基准测试的执行时间。

## 测试和性能

每个排序算法都在一个大小为 10 的数组上进行正确性测试。正确性测试会验证算法是否按预期对数组进行排序。

性能测试会对每个算法运行一个包含 100,000 个随机元素的数组，并输出排序时间。

## 添加新算法

要添加新的排序算法，您需要：

1. 创建一个新的类，继承自 `Sorter` 接口。
2. 实现 `sort()` 方法来定义排序算法。
3. 为新算法创建一个头文件，并在相应的 `.cpp` 文件中实现算法。
4. 将新的 `.cpp` 文件添加到 `CMakeLists.txt` 文件中，以便编译时包含它。

## 许可证

此项目采用 MIT 许可证，详细信息请参见 [LICENSE](LICENSE) 文件。
