#include <iostream>
using namespace std;
/**
 内联函数
 内联函数的作用，减少函数的调用，编译是代码会直接内联到调用的函数内
 */
inline void testInline(){
    cout<<"inline test"<<endl;
}

void testFunctions(){
    testInline();
}