// RadixSort.h
#ifndef RADIXSORT_H
#define RADIXSORT_H

#include "Sorter.h"

class RadixSort : public Sorter {
public:
    void sort(std::vector<int>& arr) override;   // 排序函数声明
    std::string name() const override;           // 返回排序器名称

private:
    void countingSort(std::vector<int>& arr, int exp);  // 基数排序中用到的计数排序
    int getMax(const std::vector<int>& arr);  // 获取数组中的最大值
};

#endif  // RADIXSORT_H
