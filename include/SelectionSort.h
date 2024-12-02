// SelectionSort.h
#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "Sorter.h"

class SelectionSort : public Sorter {
public:
    void sort(std::vector<int>& arr) override;   // 排序函数声明
    std::string name() const override;           // 返回排序器名称
};

#endif  // SELECTIONSORT_H
