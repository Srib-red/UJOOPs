#include<iostream>
using namespace std;
//example of over-riding
class Base{
    public:
        void fun1(){
            cout<<"fun1 from class base.\n";
        }
};
class Derived : public Base{
    public:
        using Base :: fun1;
        // // void fun1(){//this method overrides base class method i.e. fun1
        // //     cout<<"fun1 from class derived."<<endl;
        // // }
        // void fun1(){
        //     cout<<"From derived class.\n";
        // }
        void fun1(int a){
            cout<<"Value of a is: "<<a<<endl;
        }

};
int main()
{
    Base b;
    Derived d;
    // int * abc = new int;
    // delete abc;
    // abc = nullptr;
    b.fun1();
    //d.fun1();//without using Base:: fun1; -->error, with --> fun1 from base class 
    d.fun1();
    d.fun1(5);
    return 0;
}

// class Base {
// public:
//     void func(int x) { 
//         std::cout << "Base::func(int)" << std::endl; 
//     }
// };

// class Derived : public Base {
// public:
//     using Base::func;  // Bring Base::func into scope
    
//     void func(double x) {  // Add new overload
//         std::cout << "Derived::func(double)" << std::endl;
//     }
// };

// int main() {
//     Derived d;
//     d.func(5);      // Calls Base::func(int) - without using, this would be hidden!
//     d.func(5.0);    // Calls Derived::func(double)
// }