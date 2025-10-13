#include<iostream>
using namespace std;
class Base{
    public:
    virtual void print(){
        cout<<"Hi, from base class;;;;;;"<<endl;
    }
    // virtual ~Base(){
    //     cout<<"Destructor, from base;;;;;;"<<endl;
    // }
    virtual void get_derived(){
        cout<<"this is from base;;;;;;;"<<endl;
    }
};
class Derived : public Base{
    public:
    void print(){
        cout<<"Hi, from derived class;;;;;;"<<endl;
    }
    // virtual ~Derived(){
    //     cout<<"Destructor, from derived;;;;;;"<<endl;
    // }
    virtual void get_derived(){
        cout<<"this is from derived;;;;;;;"<<endl;
    }
};
class DerivedofDerived : public Derived{
    public:
    void get_derived(){
        cout<<"this is from derived of derived;;;;;;;"<<endl;
    }
};
int main()
{
    Base b;
    Base* bptr = &b;
    Derived d;
    Derived* dptr = &d;
    DerivedofDerived d2;
    DerivedofDerived *d2ptr = &d2;

    bptr = (Base*)dptr;
    dptr = (Derived*)d2ptr;

    bptr->get_derived();
    dptr->get_derived();
    d2ptr->get_derived();

// ##########################################################################

    // b.print();// base :: print //static binding
    // d.print();// derived :: print //static binding
    // bptr->print();// base :: print
    // dptr->print();// derived :: print

    // bptr = dptr; // bptr = (base *)dptr;
    // bptr->print();

    // dptr = (Derived*)bptr;
    // dptr->print();

// ##########################################################################
    return 0;
}