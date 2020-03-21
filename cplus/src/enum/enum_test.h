#ifndef ENUM_TEST_H
#define ENUM_TEST_H
/**
 * 一、c++中枚举类型分为2中，普通枚举和class类型枚举
 * 区别
 * （1）class类型枚举是强类型，枚举值位于指定作用域中，不能混用不同类型枚举的相同值
 *      不能隐式地混用class类型的枚举值和整数值
 * （2）普通枚举的枚举值的作用域和enum的作用域一致，并且会隐式的转换成整数值
 * 二、枚举类型默认情况下只定义了赋值、初始化和比较操作，我们可以为它定义其他运算符
 * 三、默认情况下枚举值对应的整数从0开始，依次加1
 * 四、建议使用class类型枚举
 */
enum class Product_info {
     red = 0, 
     purple = 1,
      blue = 2 
};
enum class Color_class{
    red,
    purple,
    blue
};
enum Color{
    red,
    purple,
    blue
};
void testEnum();

#endif // ENUM_TEST_H

