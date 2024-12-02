// HeapSort.h
#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "Sorter.h"

class HeapSort : public Sorter {
public:
    void sort(std::vector<int>& arr) override;   // 排序函数声明
    std::string name() const override;           // 返回排序器名称
private:
    void heapify(std::vector<int>& arr, int n, int i);  // 调整堆的函数
    void buildMaxHeap(std::vector<int>& arr, int n);   // 建堆函数
};

#endif  // HEAPSORT_H
