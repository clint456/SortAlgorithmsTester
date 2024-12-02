// InsertionSort.h
#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "Sorter.h"

class InsertionSort : public Sorter {
public:
    void sort(std::vector<int>& arr) override;   // 排序函数声明
    std::string name() const override;           // 返回排序器名称
};

#endif  // INSERTIONSORT_H
