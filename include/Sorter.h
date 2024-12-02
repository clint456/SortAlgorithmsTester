
#ifndef SORTER_H
#define SORTER_H

#include <vector>
#include <string>

// 排序算法接口
class Sorter {
public:
    virtual void sort(std::vector<int>& arr) = 0;
    virtual std::string name() const = 0;
    virtual ~Sorter() = default;
};

#endif // SORTER_H
