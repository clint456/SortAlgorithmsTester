// main.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cassert>
#include <random>
#include <algorithm>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "InsertionSort.h"
#include "ShellSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "RadixSort.h"
#include "CountingSort.h"
#include "BucketSort.h"  

class SortTester
{
public:
    SortTester(Sorter *sorter) : sorter_(sorter) {}

    std::vector<int> generateRandomArray(size_t size)
    {
        std::vector<int> arr(size);
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(0, 1000);
        for (size_t i = 0; i < size; ++i)
        {
            arr[i] = dist(gen);
        }
        return arr;
    }

    void printArray(const std::vector<int> &arr)
    {
        for (int num : arr)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    void testSorting()
    {
        std::vector<int> arr = generateRandomArray(10); // 生成一个随机数组
        std::cout << "生成的随机数组为: ";
        printArray(arr);

        std::vector<int> arrCopy = arr; // 创建副本
        sorter_->sort(arr);             // 使用自定义排序算法对原始数组排序

        std::cout << "排序后的数组为: ";
        printArray(arr);

        // 使用 std::sort 对副本进行排序
        std::sort(arrCopy.begin(), arrCopy.end());
        std::cout << "排序结果应为: ";
        printArray(arrCopy);
        // 比较排序后的结果，确保两者相等
        assert(arr == arrCopy && " 排序失败!\n");
        std::cout << sorter_->name() << " 通过测试!\n" << std::endl;
    }

    void testPerformance()
    {
        std::vector<int> arr = generateRandomArray(100000);
        auto start = std::chrono::high_resolution_clock::now();
        sorter_->sort(arr);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        std::cout << sorter_->name() << " sorting time: " << duration.count() << " seconds" << std::endl;
    }

private:
    Sorter *sorter_;
};

int main()
{
   BubbleSort bubbleSort;
    // QuickSort quickSort;
    // HeapSort heapSort;
    // InsertionSort insertionSort;
    // ShellSort shellSort;
    // SelectionSort selectionSort;
    // MergeSort mergeSort;
    // RadixSort radixSort;
    // CountingSort countingSort;
    // BucketSort bucketSort;  // 实例化桶排序

    SortTester bubbleTester(&bubbleSort);
    // SortTester quickTester(&quickSort);
    // SortTester heapTester(&heapSort);
    // SortTester insertionTester(&insertionSort);
    // SortTester shellTester(&shellSort);
    // SortTester selectionTester(&selectionSort);
    // SortTester mergeTester(&mergeSort);
    // SortTester radixTester(&radixSort);
    // SortTester countingTester(&countingSort);
    // SortTester bucketTester(&bucketSort);  // 增加桶排序测试

    std::cout << "Testing Bubble Sort:" << std::endl;
    bubbleTester.testSorting();

    // std::cout << "Testing Quick Sort:" << std::endl;
    // quickTester.testSorting();

    // std::cout << "Testing Heap Sort:" << std::endl;
    // heapTester.testSorting();

    // std::cout << "Testing Insertion Sort:" << std::endl;
    // insertionTester.testSorting();

    // std::cout << "Testing Shell Sort:" << std::endl;
    // shellTester.testSorting();

    // std::cout << "Testing Selection Sort:" << std::endl;
    // selectionTester.testSorting();

    // std::cout << "Testing Merge Sort:" << std::endl;
    // mergeTester.testSorting();

    // std::cout << "Testing Radix Sort:" << std::endl;
    // radixTester.testSorting();

    // std::cout << "Testing Counting Sort:" << std::endl;
    // countingTester.testSorting();

    // std::cout << "Testing Bucket Sort:" << std::endl;
    // bucketTester.testSorting();

    // std::cout << "\nTesting Performance:" << std::endl;
    bubbleTester.testPerformance();
    // quickTester.testPerformance();
    // heapTester.testPerformance();
    // insertionTester.testPerformance();
    // shellTester.testPerformance();
    // selectionTester.testPerformance();
    // mergeTester.testPerformance();
    // radixTester.testPerformance();
    // countingTester.testPerformance();
    // bucketTester.testPerformance();
    return 0;
}
