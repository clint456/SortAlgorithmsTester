// BubbleSort.cpp
#include "BubbleSort.h"

// 排序算法实现
void BubbleSort::sort(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // 手动交换
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 返回排序器的名称
std::string BubbleSort::name() const {
    return "BubbleSort";
}
