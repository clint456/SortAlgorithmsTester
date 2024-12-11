// SelectionSort.cpp
#include "SelectionSort.h"

// 选择排序(升序)
void SelectionSort::sort(std::vector<int>& arr) {
    /* 每一趟遍历选择最小的元素放到最前面 */
    for(int i=0;i<arr.size();i++){ // 外层循环
        int min = i; // 开始找本次的最小值
        for(int j=i;j<arr.size();j++)
            if(arr[j]<arr[min]) min = j; // 找到本次的最小值
        if(min!=i) swap(arr[i],arr[min]);  // 如果i就是最小值，则不需要进行交换
    }
}

// 返回排序器的名称
std::string SelectionSort::name() const {
    return "SelectionSort";
}
