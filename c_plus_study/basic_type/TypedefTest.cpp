//
//  TypedefTest.cpp
//  c_plus_study
//
//  Created by zte on 2019/12/25.
//  Copyright © 2019年 zte. All rights reserved.
//

#include "TypedefTest.hpp"
#include <iostream>
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
