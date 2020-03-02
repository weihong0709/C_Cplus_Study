//
//  BasicType.cpp
//  c_plus_study
//
//  Created by zte on 2019/12/14.
//  Copyright © 2019年 zte. All rights reserved.
//
#include<iostream>
#include "BasicType.hpp"
using namespace std;
/**
 基本内置类型分为算术类型和空类型
 */
void testBasicType(){
    testIntegralType();
    testFloat();
    testBool();
    testHasUnsignedExper();
    
}
void testIntegralType(){
    //int、short、long、long long默认是有符号类型
    int type_int = 1;
    short type_short = 1;
    long type_long = 1;
    long long type_long_long = 1;
    cout<<type_int<<endl;
    cout<<type_short<<endl;
    cout<<type_long<<endl;
    cout<<type_long_long<<endl;
    //unsigned 标识为无符号类型
    unsigned int type_unsigned_int = 1;
    //unsigned int 可以简写为unsigned
    unsigned type_unsigned = 44;
    unsigned short type_unsigned_short = 2;
    unsigned long type_unsigned_long = 3;
    unsigned int type_unsigned_long_long = 4;
    cout<<type_unsigned_int<<endl;
    cout<<type_unsigned_short<<endl;
    cout<<type_unsigned_long<<endl;
    cout<<type_unsigned_long_long<<endl;
    //char类型分为 char、signed char、unsigned char三种，实际只有有符号和无符号两种，char类型具体是有符号还是无符号，由编译器决定
    char char_unknow = 'a';
    signed char char_signed = 'n';
    unsigned char char_unsigned = 'k';
    cout<<"char_unknow:"<<char_unknow<<endl;
    cout<<"char_signed:"<<char_signed<<endl;
    cout<<"char_unsigned:"<<char_unsigned<<endl;
    wchar_t type_wchar_t = 'd';
    char16_t type_char16_t='f';
    char32_t type_char32_t ='d';
    cout<<"type_wchar_t:"<<type_wchar_t<<endl;
    cout<<"type_char16_t:"<<type_char16_t<<endl;
    cout<<"type_char32_t:"<<type_char32_t<<endl;
}
void testFloat(){
    float type_float = 3.1554444444222;
    double type_double = 3.1554444444222;
    long double type_long_double = 3.1554444444222;
    cout<<"type_float:"<<type_float<<endl;
    cout<<"type_double:"<<type_double<<endl;
    cout<<"type_long_double:"<<type_long_double<<endl;
}
void testBool(){
    bool type_bool= 3;
    bool type_bool_1 = 1;
    bool type_bool_2 = true;
    cout<<"type_bool_1:"<<type_bool_1<<endl;
    cout<<"type_bool:"<<type_bool<<endl;
    cout<<"type_bool_2:"<<type_bool_2<<endl;
}
/**
 表达式中不要混用带符号类型和无符号类型
 */
void testHasUnsignedExper(){
    int i = -42;
    unsigned u = 10 ;
    cout<<"i+i:"<<i+i<<endl;
    //表达式中有符号类型与无符号类型，有符号类型会转换为无符号类型
    cout<<"i+u:"<<i+u<<endl;
}
/**
 *字面值常量
 */
void testLiteral(){
    //十进制字面值是带符号数
    //八进制和16进制可能是带符号数，也可能是无符号数
    //short没有对应的字面值
    //字符和字符串字面值
    //指定字面值类型
    cout<<12L<<endl;
    //布尔字面值 包括 true 和 false
    cout<<true<<endl;
    //指针字面值 只有 nullptr
    //cout<<nullptr <<endl;
}

