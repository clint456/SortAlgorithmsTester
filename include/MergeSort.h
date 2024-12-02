// MergeSort.h
#ifndef MERGESORT_H
#define MERGESORT_H

#include "Sorter.h"

class MergeSort : public Sorter {
public:
    void sort(std::vector<int>& arr) override;   // 排序函数声明
    std::string name() const override;           // 返回排序器名称

private:
    void mergeSort(std::vector<int>& arr, std::vector<int>& temp, int left, int right);  // 辅助递归排序函数
    void merge(std::vector<int>& arr, std::vector<int>& temp, int left, int mid, int right);  // 合并两个子数组
};

#endif  // MERGESORT_H
