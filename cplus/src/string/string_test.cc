#include <string>
#include <iostream>
#include "string_test.h"

using namespace std;
void testCFormatString();
void testCFormatStringCompare();
void testStrAdd();
void testString(){
     testStrAdd();
     testInitialize();
     testSzie();
     testCFormatString();
     testCFormatStringCompare();
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
void testCFormatString(){
    char str[20] = "1233554";
    cout<<"str:"<<str<<endl;
    cout<<"str length:"<<strlen(str)<<endl;
    strncpy(str,"11444777ddd",20);
    cout<<"str:"<<str<<endl;
    cout<<"str length:"<<strlen(str)<<endl;

}
void testCFormatStringCompare(){
    char str[20] = "72335542";
    char str2[20] = "12335544";
    cout<<"str compare:"<<strcmp(str,str2)<<endl;
    

}
void testSnprintf(char * str,char * str2,size_t maxlength){
    snprintf(str,maxlength,"aa%s",str2);
}
void testStrAdd(){
    char str[20] ={0};
    char str2[10] = "12335544";
    
    testSnprintf(str,str2,20);
    cout<<"str:"<<str<<endl;

}

