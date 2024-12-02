// InsertionSort.cpp
#include "InsertionSort.h"

void InsertionSort::sort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];  // 当前需要插入的元素
        int j = i - 1;

        // 找到插入位置：将比 key 大的元素往右移动
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        
        // 将 key 插入到正确位置
        arr[j + 1] = key;
    }
}

// 返回排序器的名称
std::string InsertionSort::name() const {
    return "InsertionSort";
}
