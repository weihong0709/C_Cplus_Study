#include "array_test.h"
#include <iostream>
#include <array>
using namespace std;
void   test_c_array();
void   test_cplus_array();
/* 
C++建议使用c++风格数组，不会导致传递退化了的指针，不知道数组的大小
 */
void testArray(){
   test_c_array();
   test_cplus_array();
    
}
/* 
C风格数组
 */
void test_c_array(){
  int age[10] = {0,1,2,3};
   for (auto &i : age)
   {
       cout<<i<<endl;
   }
}
/* 
 C++风格数组
 */
void test_cplus_array(){
   array<int,10> ages={0};
   ages[0] = 20;
   cout<<"ages[0]"<<ages[0]<<endl;
   cout<<"ages[1]"<<ages[1]<<endl;
  //两种创建方式
  array<int, 5> myarray = {1,2,3,4,5};
  array<int,5> otherarray = myarray;
  //通过序号遍历
  for (size_t i = 0; i < 5; i++)
  {
      cout<<"myarray["<<i<<"]:"<<myarray.at(i)<<endl;
  }
  //使用迭代器遍历
  for (auto it = myarray.begin(); it!=myarray.end(); ++it)
  {
      cout<<"myarray:"<<*it<<endl;
  }
  
}