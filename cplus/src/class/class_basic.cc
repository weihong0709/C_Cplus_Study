#include "class_basic.h"
#include <iostream>
using namespace std;
struct BasicClass{
    public:
    int a;
    double b;
};
/**
 *
 **/
void testClassDefaultInit(){
   BasicClass temp;
   cout<<"a:"<<temp.a<<endl;;
}
