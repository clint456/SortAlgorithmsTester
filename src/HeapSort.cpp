// HeapSort.cpp
#include "HeapSort.h"

void HeapSort::sort(std::vector<int>& arr) {
    int n = arr.size();
    
    // 构建最大堆
    buildMaxHeap(arr, n);
    
    // 一一取出堆顶元素，交换到最后一个位置，再调整堆
    for (int i = n - 1; i > 0; --i) {
        // 交换堆顶元素与最后一个元素
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        
        // 调整堆，使其恢复堆性质
        heapify(arr, i, 0);
    }
}

// 构建最大堆
void HeapSort::buildMaxHeap(std::vector<int>& arr, int n) {
    // 从最后一个非叶子节点开始，向前调整每个节点
    for (int i = n / 2 - 1; i >= 0; --i) {
        heapify(arr, n, i);
    }
}

// 调整堆，使其符合堆性质
void HeapSort::heapify(std::vector<int>& arr, int n, int i) {
    int largest = i;         // 假设当前节点是最大值
    int left = 2 * i + 1;    // 左子节点
    int right = 2 * i + 2;   // 右子节点

    // 检查左子节点是否比当前节点大
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // 检查右子节点是否比当前节点大
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // 如果最大的值不是当前节点，交换并继续调整堆
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // 递归调整
        heapify(arr, n, largest);
    }
}

// 返回排序器的名称
std::string HeapSort::name() const {
    return "HeapSort";
}
