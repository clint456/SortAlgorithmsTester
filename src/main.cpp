#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cassert>
#include <random>
#include "Sorter.h"
#include "BubbleSort.h"
#include "QuickSort.h"
// 测试框架
class SortTester {
public:
    SortTester(Sorter* sorter) : sorter_(sorter) {}

    std::vector<int> generateRandomArray(size_t size) {
        std::vector<int> arr(size);
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(0, 1000);
        for (size_t i = 0; i < size; ++i) {
            arr[i] = dist(gen);
        }
        return arr;
    }

    void printArray(const std::vector<int>& arr) {
        for (int num : arr) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    void testSorting() {
        std::vector<int> arr = generateRandomArray(10);

        std::cout << "Original array: ";
        printArray(arr);

        std::vector<int> arrCopy = arr;

        sorter_->sort(arr);

        std::sort(arrCopy.begin(), arrCopy.end());
        assert(arr == arrCopy && "Sorting failed!");

        std::cout << sorter_->name() << " passed the test!" << std::endl;
    }

    void testPerformance() {
        std::vector<int> arr = generateRandomArray(100000);

        auto start = std::chrono::high_resolution_clock::now();
        sorter_->sort(arr);
        auto end = std::chrono::high_resolution_clock::now();

        std::chrono::duration<double> duration = end - start;
        std::cout << sorter_->name() << " sorting time: " << duration.count() << " seconds" << std::endl;
    }

private:
    Sorter* sorter_;
};

int main() {
    BubbleSort bubbleSort;
    QuickSort quickSort;

    SortTester bubbleTester(&bubbleSort);
    SortTester quickTester(&quickSort);

    std::cout << "Testing Bubble Sort:" << std::endl;
    bubbleTester.testSorting();

    std::cout << "Testing Quick Sort:" << std::endl;
    quickTester.testSorting();

    std::cout << "\nTesting Performance:" << std::endl;
    bubbleTester.testPerformance();
    quickTester.testPerformance();

    return 0;
}
