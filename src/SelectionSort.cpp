// SelectionSort.cpp
#include "SelectionSort.h"

void SelectionSort::sort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        // 找到未排序部分的最小值
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // 如果最小元素不是当前元素，则交换
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// 返回排序器的名称
std::string SelectionSort::name() const {
    return "SelectionSort";
}
