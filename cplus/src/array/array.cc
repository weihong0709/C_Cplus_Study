#include "array.h"
#include <iostream>
using namespace std;
void testArray(){
    int age[10] = {0,1,2,3};
   for (auto &i : age)
   {
       cout<<i<<endl;
   }
    
}