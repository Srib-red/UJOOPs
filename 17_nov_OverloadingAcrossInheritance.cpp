#include <iostream>
using namespace std;
class Base
{
public:
    void f()
    {
        cout <<"1. f from bsae.\n";
    }
    void f(int a)
    {
        cout <<"1. f from bsae. int a:"<<a<<"\n";
    }
    // void g()
    // { 
    //     cout <<"1. g from bsae.\n";
    // }
};
class Derived : public Base{
    public:
    using Base:: f; // overloading is resolved but not overiding
    void f()
    {
        cout <<"2. f from drev.\n";
    }
};
int main()
{
    Base b1;
    Derived d1;
    b1.f();
    b1.f(4);
    // b1.g();
    d1.f();
    d1.f(6);// Function overloading across inheritence
    return 0;
}