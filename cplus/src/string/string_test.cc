#include <string>
#include <iostream>
#include "string_test.h"

using namespace std;
void testString(){
     testInitialize();
     testSzie();
}
void testInitialize(){
    // 默认初始化为空
    string s1 ;
    string s2("12345");
    string s3(s2);
    string s4(4,'a');
    
    cout<<"s1:"<<s1<<endl;
    cout<<"s2:"<<s2<<endl;
    cout<<"s3:"<<s3<<endl;
    cout<<"s4:"<<s4<<endl;
}
void testSzie(){
    string temp = "abcdefg";
    //size是一个无符号整型，平台无关
    string::size_type a = temp.size();
    cout<<"size_type:"<<a<<endl;
}