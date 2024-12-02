// CountingSort.h
#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H

#include "Sorter.h"

class CountingSort : public Sorter {
public:
    void sort(std::vector<int>& arr) override;   // 排序函数声明
    std::string name() const override;           // 返回排序器名称
};

#endif  // COUNTINGSORT_H
