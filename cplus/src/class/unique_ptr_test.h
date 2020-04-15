#include <iostream>
#include <cstdlib>
using namespace std;
class parent
{
private:
    /* data */
public:
    parent(/* args */);
    ~parent();
};

parent::parent(/* args */)
{
    cout<<"parent create"<<endl;

}
parent::~parent()
{
    cout<<"parent dcreate"<<endl;
}


class son
{
private:
    parent temp;
public:
    son();
    son(parent &input);
    ~son();
};
son::son()
{
    //temp=input;
    cout<<"son create 1"<<endl;
}
son::son(parent &input)
{
    //temp=input;
    cout<<"son create 2"<<endl;
}

son::~son()
{
    cout<<"son dcreate"<<endl;
}
/* 
  加thread_local的话，所有对象都会重新创建一个线程相关的，保证线程安全
  例如下面的代码第54行，son构造函数虽然是引用，按常理不会进行重新构造，但是此处加了thread_local的话就会创建对象
  不加的话不会创建parent对象
 */
static  unique_ptr<son> temp_ptr(new son());
void test_unique_ptr(){
    parent temp;
    temp_ptr.reset(new son(temp));
    const char* p = "ggg";
    char * end;
    unsigned long long number = strtoull(p,nullptr,10);
    cout<<number<<endl;
}
