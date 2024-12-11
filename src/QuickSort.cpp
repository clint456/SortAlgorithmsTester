// QuickSort.cpp
#include "QuickSort.h"

// 快速排序主函数
void QuickSort::sort(std::vector<int> &arr)
{
    // 递归调用快速排序函数，对整个数组进行排序
    quickSort(arr, 0, arr.size() - 1);
}

// 返回排序器的名称
std::string QuickSort::name() const
{
    return "QuickSort"; // 该排序算法的名称是QuickSort
}

// 快速排序的递归实现
void QuickSort::quickSort(std::vector<int> &arr, int low, int high)
{
    if (low < high)
    { // 递归终止条件：如果low >= high，表示区间内的元素已经排好序
        // 执行分区操作，并返回当前分区的基准元素索引
        int pivot = partition(arr, low, high);
        // 递归排序基准元素左侧子数组
        quickSort(arr, low, pivot - 1);
       // 递归排序基准元素右侧子数组
        quickSort(arr, pivot + 1, high);
    }
    // 如果low >= high，递归停止，因为数组已经排好序
}

// 快速排序的分区操作
// 功能：将数组分成两部分，并确保左边的元素都小于等于pivot，右边的元素都大于等于pivot
int QuickSort::partition(std::vector<int> &arr, int low, int high)
{
    int pivot = arr[low]; // 选择当前区间的第一个元素作为基准元素（pivot）
    // 开始分区操作
    while (low < high)
    {
        // 从右侧开始，找到一个小于pivot的元素
        while (arr[high] >= pivot && low < high)
            high--; // 向左移动high指针，直到找到一个比pivot小的元素,并且要满足low < high
        // 将这个小于pivot的元素放到左侧
        arr[low] = arr[high];
        // 从左侧开始，找到一个大于pivot的元素
        while (arr[low] <= pivot && low < high)
            low++; // 向右移动low指针，直到找到一个比pivot大的元素,并且要满足low < high
        // 将这个大于pivot的元素放到右侧
        arr[high] = arr[low];
    }
    // 结束分区操作，将pivot元素放到最终的位置（low == high）
    arr[low] = pivot; // 将pivot元素放到正确的位置（此时pivot两边的元素都已经排序）
    // 返回当前基准元素的最终位置
    return low;
}
