// ShellSort.cpp
#include "ShellSort.h"

// 希尔排序
void ShellSort::sort(std::vector<int>& arr) {
    int i=0,j=0,len = arr.size();
    int d = len/2; // 步长初始设置为数组的一半
    while (d>=1) {
      //插入排序
        for (i=1; i<len; i++) { // 第0位是默认有序
          int temp = arr[i];
          for (j=i-1; j>=0; j--) { // 寻找当前元素i需要插入到有序列中的什么位置
            if(temp<arr[j]){
              arr[j+1]=arr[j]; // 未匹配的位置循环依次往后移动
            }else break; // 匹配到插入位置:j+1
          }
          // 在插入位置，将temp赋值
          arr[j+1] = temp;
        }
        d/=2; // 步长进行减小一半；直到为1
    }
}

// 返回排序器的名称
std::string ShellSort::name() const {
    return "ShellSort";
}
