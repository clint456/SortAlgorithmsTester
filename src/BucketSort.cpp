// BucketSort.cpp
#include "BucketSort.h"
#include <vector>
#include <algorithm>

void BucketSort::sort(std::vector<int>& arr) {
    if (arr.empty()) return;

    // 找到数组中的最大值和最小值
    int minElement = *std::min_element(arr.begin(), arr.end());
    int maxElement = *std::max_element(arr.begin(), arr.end());

    // 根据最大值和最小值的差值计算桶的数量
    int bucketCount = (maxElement - minElement) / arr.size() + 1;

    // 创建桶
    std::vector<std::vector<int>> buckets(bucketCount);

    // 将元素分配到不同的桶中
    for (int num : arr) {
        int index = (num - minElement) * (bucketCount - 1) / (maxElement - minElement);
        buckets[index].push_back(num);
    }

    // 对每个桶进行排序（这里使用插入排序）
    for (auto& bucket : buckets) {
        std::sort(bucket.begin(), bucket.end());
    }

    // 将所有桶中的元素按顺序合并回原数组
    int index = 0;
    for (auto& bucket : buckets) {
        for (int num : bucket) {
            arr[index++] = num;
        }
    }
}

std::string BucketSort::name() const {
    return "BucketSort";
}
