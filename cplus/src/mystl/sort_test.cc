#include <iostream>
using namespace std;
/* 
 冒泡排序
 */
void bubbleSort(int *a, int n) {
    for (size_t i = 0; i < n; i++)
    {
        bool isSwap = false;
        for (size_t j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                //交换 
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSwap = true;
            }
        } 
         //没有交换，就说明顺序是ok的，终止
            if (!isSwap)
            {
                break;
            }
    }
}
/* 
  插入排序
  插入排序的核心是把数据分为未排序区间和已排序区间
  第一次已排序区间只有一个元素，取未排序区间的元素来在已排序区间中找到自己的位置插入
 */

void insertSort(int *a, int n) {

    for (size_t i = 0; i < n; i++)
    {
        int value = a[i];
        bool isSwap = false;
        for (size_t j = 0; j < n; j++)
        {
            if (a[j]>a[j+1])
            {
                //交换 
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSwap = true;
            }
        } 
         //没有交换，就说明顺序是ok的，终止
            if (!isSwap)
            {
                break;
            }
    }
}

void testSort(){
    int a[6] = {7,4,6,1,8,9};
    bubbleSort(a,6);
    for(size_t i = 0; i < 6; i++)
    {
        cout<<i<<":"<<a[i]<<endl;
    }
    
}    

