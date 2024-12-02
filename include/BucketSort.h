// BucketSort.h
#ifndef BUCKETSORT_H
#define BUCKETSORT_H

#include "Sorter.h"

class BucketSort : public Sorter {
public:
    void sort(std::vector<int>& arr) override;   // 排序函数声明
    std::string name() const override;           // 返回排序器名称
};

#endif  // BUCKETSORT_H
