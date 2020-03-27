#include <iostream>
using namespace std;
class student
{
private:
    /* data */
public:
    student(/* args */);
    ~student();
};

student::student(/* args */)
{
    cout<<"student create"<<endl;
}

student::~student()
{
    cout<<"student destruction"<<endl;
}
