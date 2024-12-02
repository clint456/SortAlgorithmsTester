// QuickSort.cpp
#include "QuickSort.h"

// 快速排序的核心算法
void QuickSort::sort(std::vector<int>& arr) {
    if (arr.size() <= 1) return;
    quickSort(arr, 0, arr.size() - 1);
}

// 返回排序器的名称
std::string QuickSort::name() const {
    return "QuickSort";
}

// 快速排序的实现
void QuickSort::quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // 分区
        quickSort(arr, low, pi - 1);  // 对左子数组排序
        quickSort(arr, pi + 1, high); // 对右子数组排序
    }
}

// 分区操作：将数组分成两部分
int QuickSort::partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // 选择最后一个元素作为枢纽
    int i = low - 1;        // i 是比枢纽小的元素的最后一个位置

    // 将所有小于 pivot 的元素移到数组的左边
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            // 手动交换
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // 将枢纽放到正确的位置
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;  // 返回枢纽的索引
}
