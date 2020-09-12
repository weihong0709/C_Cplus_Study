#include <iostream>

#include "typedef_test.h"
typedef char *cstr;
typedef const cstr pstring;
using namespace std;
void testTypedef(){
    char b = '2';
    cstr temp = &b;
    cout<<"temp:"<<*temp<<endl;
    cout<<"size:"<<sizeof(temp)<<endl;
    pstring temp2 = &b;
    cout<<"temp2:"<<*temp2<<endl;
    char c = 't';
    *temp2 = 't';
    cout<<"temp2:"<<*temp2<<endl;
    //temp2 = &c;
    const char *str = &c;
    //*str = 2;
    
}