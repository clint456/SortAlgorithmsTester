// HeapSort.cpp
#include "HeapSort.h"

void HeapSort::sort(std::vector<int> &arr)
{
    int n = arr.size();

    // 构建初始的大顶堆
    buildMaxHeap(arr, n);

    // 取出堆顶元素，交换到最后一个位置，再调整堆
    for (int i = n - 1; i > 0; --i)
    {
        // 将堆顶元素和堆底元素进行交换
        swap(arr[0], arr[i]);
        // 因为只交换了堆顶和堆底元素，堆的大体结构没有被破坏
        // 只需要从交换上来的堆底元素开始，进行heapify操作
        heapify(arr, i, 0); //
    }
}

// 构建最大堆
void HeapSort::buildMaxHeap(std::vector<int> &arr, int n)
{
    // 从最后一个非叶子节点开始，向前进行“下坠操作”
    for (int i = n / 2 - 1; i >= 0; --i)
    {
        heapify(arr, n, i);
    }
}

// 调整堆，使其符合堆性质
void HeapSort::heapify(std::vector<int> &arr, int n, int i)
{
    int max = i;               // 假设当前值为最大值
    int left_son = 2 * i + 1;  // 当前节点的左孩子
    int right_son = 2 * i + 2; // 当前节点的右孩子

    // 检查是否有左孩子,且左孩子是否大于当前节点
    if (left_son < n && arr[left_son] > arr[max])
    {
        max = left_son;
    }

    // 检查是否有右孩子,且右孩子是否大于当前节点
    if (right_son < n && arr[right_son] > arr[max])
    {
        max = right_son;
    }

    // 如果最大值不是当前节点，交换并且继续调整堆
    if (max != i)
    {
        // 交换较大的子节点
        swap(arr[i], arr[max]);
        // 继续从调整的子节点开始，检查并调整剩下的节点
        heapify(arr, n, max);
    }
}

// 返回排序器的名称
std::string HeapSort::name() const
{
    return "HeapSort";
}
