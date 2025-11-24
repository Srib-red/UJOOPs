#include<iostream>
using namespace std;
class A{
    public:
    virtual void f(){cout<<"f from A.\n";}
    virtual void g(){cout<<"g from A.\n";}
};
class B : public A{
    public:
    void f(){cout<<"f from B.\n";}
    void g(){cout<<"g from B.\n";}
};
int main()
{
    A a;
    B b;
    B* bptr = &b;
    A* aptr = &a;
    aptr->f();
    bptr = (B*)aptr; //derived ptr --> base ptr
    aptr = bptr; //base ptr --> base ptr
    bptr->f(); //segmentation fault if virtual only in B.
    aptr->f(); //segmentation fault if virtual only in B.
    return 0;
}