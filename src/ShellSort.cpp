// ShellSort.cpp
#include "ShellSort.h"

void ShellSort::sort(std::vector<int>& arr) {
    int n = arr.size();
    // 初始步长设为数组大小的一半，逐渐减小步长
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // 对每个子数组进行插入排序
        for (int i = gap; i < n; ++i) {
            int key = arr[i];
            int j = i;
            // 插入排序：将当前元素插入到正确的位置
            while (j >= gap && arr[j - gap] > key) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = key;
        }
    }
}

// 返回排序器的名称
std::string ShellSort::name() const {
    return "ShellSort";
}
