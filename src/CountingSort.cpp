// CountingSort.cpp
#include "CountingSort.h"
#include <vector>
#include <algorithm>

void CountingSort::sort(std::vector<int>& arr) {
    if (arr.empty()) return;

    // 找到数组中的最大值和最小值
    int maxElement = *std::max_element(arr.begin(), arr.end());
    int minElement = *std::min_element(arr.begin(), arr.end());

    // 创建计数数组
    std::vector<int> count(maxElement - minElement + 1, 0);

    // 统计每个元素出现的次数
    for (int num : arr) {
        count[num - minElement]++;
    }

    // 将元素放回原数组
    int index = 0;
    for (int i = 0; i < count.size(); ++i) {
        while (count[i]-- > 0) {
            arr[index++] = i + minElement;
        }
    }
}

std::string CountingSort::name() const {
    return "CountingSort";
}
