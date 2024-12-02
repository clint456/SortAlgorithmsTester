// RadixSort.cpp
#include "RadixSort.h"
#include <vector>

void RadixSort::sort(std::vector<int>& arr) {
    int max = getMax(arr);  // 找到数组中的最大值
    // 对每一位进行计数排序，从最低位到最高位
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

std::string RadixSort::name() const {
    return "RadixSort";
}

void RadixSort::countingSort(std::vector<int>& arr, int exp) {
    int n = arr.size();
    std::vector<int> output(n);  // 输出数组
    std::vector<int> count(10, 0);  // 计数数组，存储每个数字的出现次数

    // 根据当前位数（exp）对每个元素进行计数
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // 计算计数数组的累积值
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // 进行排序
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // 将排序后的数组复制回原数组
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int RadixSort::getMax(const std::vector<int>& arr) {
    int max = arr[0];
    for (int num : arr) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}
