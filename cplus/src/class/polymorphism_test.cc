#include <iostream>
using namespace std;

class CBase{
public:
    /*
     虚函数 
     */
    virtual void someVirtualFunction(){
        cout<<"CBase virtual method invoke"<<endl;
    }
    virtual void someVirtualFunction2(){
        cout<<"CBase virtual method2 invoke"<<endl;
    }
    void someFunction(){
        cout<<"CBase method invoke"<<endl;
    }
};
class CDrived:public CBase{
public:
/* 
  虚函数子类覆盖时，可以加virtual和override，也可以不加，加override的目的时如果没有覆盖会报错
 */
     virtual void someVirtualFunction() override;
};
void CDrived::someVirtualFunction(){
        cout<<"CDrived virtual method invoke"<<endl;
}


class AbstractCBase{
public:
    /*
     虚函数 
     */
    virtual void someVirtualFunction(){
        cout<<"AbstractCBase virtual method invoke"<<endl;
    }
    /* 
     纯虚函数    
     */
    virtual void pureVirtualFunction()=0;
    void someFunction(){
        cout<<"AbstractCBase method invoke"<<endl;
    }
};


class CDrivedImplementAbstract:public AbstractCBase{
public:
  void pureVirtualFunction();
};
void CDrivedImplementAbstract::pureVirtualFunction(){
        cout<<"CDrivedImplementAbstract virtual method invoke"<<endl;
}


/**
 C++通过虚方法实现多态，非虚方法指针或者引用是什么类型就调用对应类型的方法，虚方法会根据实际赋值的类型动态调用对应的方法
 java里面的abstract的方法跟虚函数作用不一样
 java是所有方法，只要子类存在，就会有多态的效果，C++为什么不能像java这样实现？
 多态的实现关键：虚函数表，包含虚函数的对象都有一个虚函数表的指针，存放虚函数表对应的地址
 */
void testPolymorphismWithPointer(){
    CDrived cdrived;
    CBase * cdrivedPointer = &cdrived;
    cdrivedPointer->someVirtualFunction();
    cdrivedPointer->someFunction();
    CBase cbase;
    CBase * cbasePointer = &cbase;
    cbasePointer->someVirtualFunction();
    cbasePointer->someFunction();
    CDrivedImplementAbstract cdrivedNew;
    AbstractCBase *abstractCBase = &cdrivedNew;
    abstractCBase->pureVirtualFunction();
    abstractCBase->someFunction();
    abstractCBase->someVirtualFunction();
}
void testPolymorphismWithReference(){
    CDrived cdrived;
    CBase & cdrivedReference = cdrived;
    cdrivedReference.someVirtualFunction();
    cdrivedReference.someFunction();
    CBase cbase;
    CBase & cbaseReference = cbase;
    cbaseReference.someVirtualFunction();
    cbaseReference.someFunction();
}
/* 
  采用值传递导致值切除，只有基类的行为，不要采用该方式
  应该使用指针或者引用
 */
void testPolymorphismWithObject(){
    CDrived cdrived;
    CBase cdrivedReference = cdrived;
    cdrivedReference.someVirtualFunction();
    cdrivedReference.someFunction();
    CBase cbase;
    CBase cbaseReference = cbase;
    cbaseReference.someVirtualFunction();
    cbaseReference.someFunction();
    /*
     下面语句会报错，抽象基类不能定义变量，只能定义指针或者引用类型 
     */
    //AbstractCBase abstractCBase;

}
