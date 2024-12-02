// ShellSort.h
#ifndef SHELLSORT_H
#define SHELLSORT_H

#include "Sorter.h"

class ShellSort : public Sorter {
public:
    void sort(std::vector<int>& arr) override;   // 排序函数声明
    std::string name() const override;           // 返回排序器名称
};

#endif  // SHELLSORT_H
