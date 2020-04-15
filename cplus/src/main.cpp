#include <iostream>
#include <string.h>
#include "array_test.h"
#include "string_test.h"
#include "enum_test.h"
#include "function_test.h"
#include "unique_ptr_test.h"
#include "polymorphism_test.h"

using namespace std;
int main(void){
  //testArray();
  testString();
  //testEnum();
  //testFunctions();
  //test_unique_ptr();
  //test_unique_ptr();
  //testPolymorphismWithPointer();
  testPolymorphismWithObject();
}