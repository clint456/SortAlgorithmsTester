// QuickSort.h
#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sorter.h"

class QuickSort : public Sorter {
public:
    void sort(std::vector<int>& arr) override;  // 排序函数声明
    std::string name() const override;          // 返回排序器名称
private:
    void quickSort(std::vector<int>& arr, int low, int high); // 辅助排序函数
    int partition(std::vector<int>& arr, int low, int high);  // 辅助分区函数
};

#endif  // QUICKSORT_H
