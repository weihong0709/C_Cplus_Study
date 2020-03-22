#include <iostream>
using namespace std;
/* 
  方法模板
 */
template <typename  T>
 T  functionTemplate(T a) {
    return a;
}

void testTemplate(){
     cout<<functionTemplate(12);
}