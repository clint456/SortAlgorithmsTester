// BubbleSort.h
#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Sorter.h"

class BubbleSort : public Sorter {
public:
    void sort(std::vector<int>& arr) override;   // 排序函数声明
    std::string name() const override;           // 返回排序器名称
};

#endif  // BUBBLESORT_H
