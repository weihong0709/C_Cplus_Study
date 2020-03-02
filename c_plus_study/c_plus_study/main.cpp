//
//  main.cpp
//  cplustest
//
//  Created by  刘为红 on 2019/8/29.
//  Copyright © 2019年  刘为红. All rights reserved.
//

#include <iostream>
#include "../basic_type/BasicType.hpp"
#include "../basic_type/TypedefTest.hpp"
#include "../variable/VariableTest.hpp"
#include "../variable/AutoVariableTest.hpp"
using namespace std;
struct student{
    unsigned char name[25] ;
    int age;
}two;
enum weeky{ONE,TWO,THREE};
int main(int argc, const char * argv[]) {
    //testBasicType();
    //testVariable();
    testTypedef();
    testAuto();
    return 0;
}




