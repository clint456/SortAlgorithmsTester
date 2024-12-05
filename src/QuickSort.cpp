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


}
