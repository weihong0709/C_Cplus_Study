#include "struct_test.h"
#include <iostream>
using namespace std;

struct   rect                            
{
    /* data */
    struct point pt1[10];
    struct point pt2;
    
} rectone1;

void testStruct(){
    struct point temp;
    temp.x= 1;
    temp.y=2;
    struct rect temp2;
    //
    cout<<temp2.pt1->x<<endl;
    temp2.pt1[0] = temp;
    rectone1.pt1[0] =temp;
    cout<<"rect.pt1.x:"<<rectone1.pt1[0].x<<endl;
}