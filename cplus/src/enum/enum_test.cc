#include <iostream>
#include "enum_test.h"
using namespace std;

void testEnum(){
    Product_info product_red = Product_info::red;
    Color color = Color::red;
    //不能直接输出
    //cout<<"Product_info:"<<<product_red<endl;
    //cout<<"Color:"<<color<<endl;
    //如下因为是class类型枚举，不支持隐式转换
    //int product_info_red = red;
    //普通枚举支持隐式转换，class类型枚举不支持隐式转换
    int color_red = color;
    cout<<"color_red:"<<color_red<<endl;
    //普通枚举的元素可以直接赋值,作用域跟枚举一样，即Color 和他的元素red的作用域一样
    //class枚举类型作用域在class内，必须带类前缀
    int color_red2 = red;
    cout<<"color_red2:"<<color_red2<<endl;
    //比较操作
    if (color_red==red)
    {
        cout<<"color is red"<<endl;
    }
    if (product_red==Product_info::red)
    {
        cout<<"color is red"<<endl;
    }
    
}