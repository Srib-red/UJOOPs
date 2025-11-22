#include<iostream>
using namespace std;
class Base{
    public:
    void f()
    {
        cout <<"1111. f from bsae.\n";
    }
};
class Derived : public Base{
    public:
    virtual void f()
    {
        cout <<"2222. f from drev.\n";
    }
};

int main()
{
    Base* b1 = new Base;
    Derived * d1 = new Derived;
    d1 = (Derived*)b1;
    d1->f();
    delete b1;
    b1 = nullptr;
    delete d1;
    d1 = nullptr;
}