// InsertionSort.cpp
#include "InsertionSort.h"

// 1.直接插入排序
// void InsertionSort::sort(std::vector<int>& arr) {
//     int len = arr.size();
//     // 1.外层遍历
//     for(int i=1;i<len;i++){ //第0位默认有序
//         int temp = arr[i]; // 将当前值暂存
//         int j = 0; // 寻找应放在当前已排序的前半部分那个位置
//         while(j<i && temp>=arr[j]) j++;//2.比较
//         for(int l=i;l>j;l--) {arr[l] = arr[l-1];} // 3.将后面的元素全部往后移
//         arr[j] = temp; //最后将当前元素放在j位置上
//     }

// }
// 2.折半插入排序
void InsertionSort::sort(std::vector<int> &arr)
{
    int len = arr.size();
    // 1.外层遍历
    for (int i = 1; i < len; i++)
    {                      // 第0位默认有序
        int temp = arr[i]; // 将当前值暂存

        // 2.折半查找
        int high = i,low = 0;
        while(low<=high){
            int mid = (high + low)/2; 
            if(arr[mid]>temp) high = mid-1; 
            else if(arr[mid]==temp) {
                low = mid;
                break;
            }
            else low = mid+1;
        }
        // 3.将后面的元素全部往后移
        for (int l = i; l > low; l--)arr[l] = arr[l - 1];
        arr[low] = temp; // 最后将当前元素放在j位置上
    }
}
// 返回排序器的名称
std::string InsertionSort::name() const
{
    return "InsertionSort";
}
