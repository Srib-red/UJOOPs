#include<iostream>
using namespace std;
class Base{
    public:
        int a = 4;
        void display(){
            cout<<"##DISPLAY FROM BASE## Value of a in base class: "<<a<<endl;
        }
};
class Derived : public Base{
    public:
        int b = 5;
        int c = 6;
        void display(){
            cout<<"##DISPLAY FROM Derv## Values of a,b and c is derived class are: "<<a<<" . . "<<b<<" . . "<<c<<endl;
        }
};
int main()
{
    Base ob;
    Base* obptr = &ob;
    cout<<"obptr before initial: "<<obptr<<endl;
    // cout<<"Value of a in base class: "<<obptr->a<<endl;
    Derived od;
    Derived* odptr = &od;
    cout<<"odptr before initial: "<<odptr<<endl;

    // obptr = odptr; // UPcasting //implicit casting is allowed here //same
    // obptr = (Base*)odptr; // same
    // cout<<"obptr after upcasting: "<<obptr<<endl;
    // cout<<"value of a: "<<obptr->a<<endl;
    // // cout<<"value of b: "<<obptr->b<<endl;//--> ###error###
    // obptr->display();

    // odptr = obptr; ###error###
    odptr = (Derived*)obptr;//explicit casting DOWNcasting
    odptr->display();
    cout<<"Values of a,b and c is derived class are: "<<odptr->a<<" . . "<<odptr->b<<" . . "<<odptr->c<<endl;
    return 0;
}