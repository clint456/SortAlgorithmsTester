// BubbleSort.cpp
#include "BubbleSort.h"

// 排序算法实现
void BubbleSort::sort(std::vector<int>& arr) {
    bool swapped;
    for (size_t i = 0; i < arr.size(); ++i) {
        swapped = false;
        for (size_t j = 0; j < arr.size() - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // 如果没有交换发生，说明数组已经排序好，可以提前退出
        if (!swapped) break;
    }
}


// 返回排序器的名称
std::string BubbleSort::name() const {
    return "BubbleSort";
}
