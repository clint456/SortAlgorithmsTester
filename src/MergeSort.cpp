// MergeSort.cpp
#include "MergeSort.h"

void MergeSort::sort(std::vector<int>& arr) {
    if (arr.size() <= 1) return;  // 如果数组只有一个元素或为空，直接返回
    std::vector<int> temp(arr.size());  // 用于存储临时合并结果
    mergeSort(arr, temp, 0, arr.size() - 1);  // 调用递归排序函数
}

std::string MergeSort::name() const {
    return "MergeSort";
}

void MergeSort::mergeSort(std::vector<int>& arr, std::vector<int>& temp, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // 计算中间位置
        mergeSort(arr, temp, left, mid);  // 递归排序左半部分
        mergeSort(arr, temp, mid + 1, right);  // 递归排序右半部分
        merge(arr, temp, left, mid, right);  // 合并左右两部分
    }
}

void MergeSort::merge(std::vector<int>& arr, std::vector<int>& temp, int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;

    // 合并左右两个子数组
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // 如果左半部分有剩余，直接拷贝到 temp 中
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // 如果右半部分有剩余，直接拷贝到 temp 中
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // 将临时数组中的元素拷贝回原数组
    for (int i = left; i <= right; ++i) {
        arr[i] = temp[i];
    }
}
