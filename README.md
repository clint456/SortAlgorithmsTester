# Sorting Algorithms Framework
[中文](./README_CN.md)<br>

This repository contains a collection of sorting algorithms implemented in C++. It provides a framework for testing and comparing various sorting algorithms on both small arrays for correctness and large arrays for performance. The implemented algorithms include:

- Bubble Sort
- Quick Sort
- Heap Sort
- Insertion Sort
- Shell Sort
- Selection Sort
- Merge Sort
- Radix Sort
- Counting Sort
- Bucket Sort

## Features

- **Correctness Testing**: Each sorting algorithm is tested to ensure it sorts an array correctly.
- **Performance Testing**: The algorithms are benchmarked to compare their execution time on large datasets.
- **Modular Design**: Each sorting algorithm is implemented as a separate class that adheres to a common interface.

## Algorithms Included

### 1. **Bubble Sort**  
A simple comparison-based algorithm where each pair of adjacent elements is compared and swapped if they are in the wrong order. It repeats this process until the list is sorted.

### 2. **Quick Sort**  
A divide-and-conquer algorithm that selects a pivot element, partitions the array into two sub-arrays, and recursively sorts each sub-array.

### 3. **Heap Sort**  
A comparison-based algorithm that builds a binary heap and sorts the array by repeatedly extracting the maximum element from the heap.

### 4. **Insertion Sort**  
A simple comparison-based algorithm where each element is inserted into its correct position in a sorted portion of the array.

### 5. **Shell Sort**  
An optimization of insertion sort that allows the exchange of items that are far apart by gradually reducing the gap between elements to be compared.

### 6. **Selection Sort**  
A comparison-based algorithm where the minimum element from the unsorted part of the array is selected and swapped with the first unsorted element.

### 7. **Merge Sort**  
A divide-and-conquer algorithm that divides the array into two halves, recursively sorts each half, and merges them back together.

### 8. **Radix Sort**  
A non-comparative integer sorting algorithm that sorts elements digit by digit, starting from the least significant digit.

### 9. **Counting Sort**  
A non-comparative integer sorting algorithm that counts the number of occurrences of each distinct element and uses this count to place elements in their correct position.

### 10. **Bucket Sort**  
A distribution-based sorting algorithm that divides the array into several buckets and sorts each bucket individually before combining the results.

## Project Structure

```
/SortingAlgorithmsTester
│
├── /include          # Header files for the sorting algorithms
│   ├── Sorter.h      # Abstract base class for all sorting algorithms
│   ├── BubbleSort.h  # Header for BubbleSort class
│   ├── QuickSort.h   # Header for QuickSort class
│   ├── HeapSort.h    # Header for HeapSort class
│   ├── InsertionSort.h
│   ├── ShellSort.h
│   ├── SelectionSort.h
│   ├── MergeSort.h
│   ├── RadixSort.h
│   ├── CountingSort.h
│   └── BucketSort.h  # Header for BucketSort class
│
├── /src              # Source files for the sorting algorithms
│   ├── main.cpp      # Entry point for the application, where tests are executed
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
└── CMakeLists.txt    # CMake build file for the project
```

## Requirements

- C++11 or later
- CMake 3.10 or later (for building the project)

## Build Instructions

1. Clone the repository:

   ```bash
   git clone https://github.com/clint456/SortAlgorithmsTester.git
   cd SortAlgorithmsTester
   ```

2. Create a build directory and generate build files using CMake:

   ```bash
   mkdir build
   cd build
   cmake ..
   ```

3. Build the project:

   ```bash
   cmake --build .
   ```

4. Run the program:

   ```bash
   ./SortingAlgorithmsTester
   ```

   The program will execute all sorting algorithms, perform correctness tests, and print the execution time for performance benchmarking.

## Testing and Performance

Each sorting algorithm is tested on arrays of size 10 for correctness. The correctness test asserts that the algorithm produces the correct sorted array.

The performance tests run each algorithm on an array of 100,000 random elements and print the sorting time.

## Adding New Algorithms

To add a new sorting algorithm:

1. Create a new class that inherits from the `Sorter` interface.
2. Implement the `sort()` method to define the sorting algorithm.
3. Add a new header file for the algorithm and implement the class in a corresponding `.cpp` file.
4. Add the new `.cpp` file to the CMakeLists.txt file for inclusion in the build process.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.