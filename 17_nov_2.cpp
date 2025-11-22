#include<iostream>
using namespace std;
class Base{
    public:
    virtual void f()
    {
        cout <<"1111. f from bsae.\n";
    }
    virtual void g()
    { 
        cout <<"1111. g from bsae.\n";
    }
    void h()
    { 
        cout <<"1111. h from bsae.\n";
    }
};
class Derived : public Base{
    public:
    void f()
    {
        cout <<"2222. f from drev.\n";
    }
    void g()
    { 
        cout <<"2222. g from drev.\n";
    }
    virtual void h()
    { 
        cout <<"2222. h from drev.\n";
    }
};
class Derived222 : public Derived{
    public:
    void h()
    { 
        cout <<"3333. h from DofD.\n";
    }
};
int main()
{
    // Base b1;
    // Derived d1;
    
    // // b1.f(); //static binding
    // // b1.g(); //static binding
    // // d1.f(); //static binding
    // // d1.g(); //static binding

    // Base *bptr = &b1;
    // Derived *dptr = &d1;

    // bptr = dptr;//(upcasting) base pointer points to derived pointer
    // bptr->f();//dynamic binding
    // bptr->g();
    // dptr->f();
    // dptr->g();

    Base b1;
    Derived d1;
    Derived222 dd1;

    Base* bptr = &b1;
    Derived* dptr = &d1;
    Derived222* ddptr = &dd1;

    bptr = dptr;
    dptr = ddptr;
    
    bptr->h();
    dptr->h();
    ddptr->h();

    return 0;
}