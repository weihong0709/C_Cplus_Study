#include <iostream>
#include <memory>
#include <thread>
#include <stdio.h>
#include "student.h"
using namespace std;

class Demo2{
private:
    int temp;
public:
    void modifyDemo(){
        
    }
};
class Demo{
private:
    int a;
    /**
     *友元类，友元不能传递
     */
    friend Demo2 ;
public:
    Demo(int i){
        a=i;
        std::cout<< "create demo " << i<<"\n";
    }
    ~Demo(){
        std::cout<<"demo"<<a<<" destructed\n";
    }
    void testThis();
    /**
     *常量成员函数，不能修改类的成员变量，静态变量除外
     */
    void constMethod() const{
        
    }
    /**
     *友元函数
     */
    friend void modifyDemo(Demo & demo);
};

void modifyDemo(Demo & demo){
    demo.a=8;
    std::cout<<"friend method:"<<demo.a<<endl;
}

/**
 *this 指向方法对应的对象的指针
 */
void Demo::testThis(){
    std::cout<<"test this:"<<this->a<<endl;
}

/**
 *this 指向方法对应的对象的指针
 */
void testUniquePointer(){
    //static thread_local unique_ptr<student> stu(new student());
    static thread_local shared_ptr<student> stu_1(new student());
    stu_1.reset(new student());
    
}
