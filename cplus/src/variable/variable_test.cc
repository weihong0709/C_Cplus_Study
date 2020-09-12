#include <iostream>
#include <stdio.h>
#include "variable_test.h"

using namespace std;
void testVariableDef();
void testVariableInit();
void testVariable(){
    testVariableDef();
    testVariableInit();
}
/**
 变量定义
 */
void testVariableDef(){
    int a=30,b=a*10;
    cout<<"a:"<<a<<",b:"<<b<<endl;
}
/**
 *变量初始化
 */
void testVariableInit(){
    int units_sold = 0;
    //列表初始化
    int units_sold_1 = {0};
    int units_sold_2{0};
    int units_sold_3(0);
    //列表初始化，存在丢失信息的风险时会报错
    long double ld =3.15445;
    //int a{ld},b={ld};
    int c(ld),d=(ld);
    int temp;
    cout<<"temp:"<<temp<<endl;
    
}