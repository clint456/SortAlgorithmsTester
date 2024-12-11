// BubbleSort.cpp
#include "BubbleSort.h"


// 排序算法实现(升序)
void BubbleSort::sort(std::vector<int>& arr) {
    /* 注意是升序/降序，如何处理区间问题*/
    int len = arr.size();
    bool flag = false; // 内循环是否已经有序
    for(int i = 0; i< len && !flag; ++i){  
        flag = true; // 设置默认为有序
        for(int  j=0; j< len-1-i;++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]); 
                flag = false; // 检测，表示非有序
            }       
        }
    }
}

// 返回排序器的名称
std::string BubbleSort::name() const {
    return "BubbleSort";
}
