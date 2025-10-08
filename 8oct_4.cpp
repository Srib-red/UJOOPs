#include<iostream>
using namespace std;
class Base{
    public:
        int a = 4;
};
class Derived : public Base{
    public:
        int b = 5;
        int c = 6;
};
int main()
{
    Base ob;
    Base* obptr = &ob;
    cout<<"Value of a in base class: "<<obptr->a<<endl;
    Derived od;
    Derived* odptr = &od;
    //obptr = odptr; // UPcasting //implicit casting is allowed here
    //cout<<"value of a: "<<obptr->a<<endl;
    odptr = (Derived*)odptr;//explicit casting DOWNcasting

    cout<<"Values of a,b and c is derived class are: "<<odptr->a<<" . . "<<odptr->b<<" . . "<<odptr->c<<endl;
    return 0;
}