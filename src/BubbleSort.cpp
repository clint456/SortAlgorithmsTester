// BubbleSort.cpp
#include "BubbleSort.h"


// 排序算法实现(升序)
void BubbleSort::sort(std::vector<int>& arr) {
    int len = arr.size();
    bool flag = false; // 内循环是否已经有序
    for(int i = 0; i<=len -1 && !flag; i++){  
        flag = true; // 设置默认为有序
        for(int  j=i; j<=len-1;j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]); 
                flag = false; // 检测，表示非有序
            }       
        }
    }
}

// void BubbleSort::sort(std::vector<int>& arr) {
//     bool swapped;
//     for (size_t i = 0; i < arr.size(); ++i) {
//         swapped = false;
//         for (size_t j = 0; j < arr.size() - 1 - i; ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 std::swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         // 如果没有交换发生，说明数组已经排序好，可以提前退出
//         if (!swapped) break;
//     }
// }




// 返回排序器的名称
std::string BubbleSort::name() const {
    return "BubbleSort";
}
