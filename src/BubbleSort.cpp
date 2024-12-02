// BubbleSort.cpp
#include "BubbleSort.h"
#include <algorithm>  // for std::swap

// 排序算法实现
void BubbleSort::sort(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// 返回排序器的名称
std::string BubbleSort::name() const {
    return "BubbleSort";
}
