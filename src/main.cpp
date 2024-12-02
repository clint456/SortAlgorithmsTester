// main.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cassert>
#include <random>
#include <algorithm>
#include "BubbleSort.h" // 包含 BubbleSort.h
#include "QuickSort.h"  // 包含 QuickSort.h

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

        // 使用 std::sort 对副本进行排序
        std::sort(arrCopy.begin(), arrCopy.end());

        // 比较排序后的结果，确保两者相等
        assert(arr == arrCopy && " 排序失败!");
        std::cout << sorter_->name() << " 通过测试!" << std::endl;
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
    QuickSort quickSort;

    SortTester bubbleTester(&bubbleSort);
    SortTester quickTester(&quickSort);

    std::cout << "Bubble Sort测试:" << std::endl;
    bubbleTester.testSorting();

    std::cout << "Quick Sort测试:" << std::endl;
    quickTester.testSorting();

    std::cout << "\n性能测试:" << std::endl;
    //bubbleTester.testPerformance();
    quickTester.testPerformance();

    return 0;
}
