#include <iostream>
using namespace std;
class A // shallow copy
{
public:
    int *data;
    A(int a)
    {
        data = new int(a);
    }
    void get_details()
    {
        cout << "address :" << data << endl;
    }
    ~A()
    {
        cout<<"destructor"<<endl;
        delete data;
        data = nullptr;
    }
};
class B // deep copy
{
public:
    int *data;
    B(int b)
    {
        data = new int(b);
    }
    B(const B &others)
    {
        data = new int(*others.data);
    }
    void get_details()
    {
        cout << "address :" << data << endl;
    }
    ~B()
    {
        delete data;
        data = nullptr;
    }
};
int main()
{
    A a1(5);
    a1.get_details();
    A a2 = a1; // A a2(a1);
    a2.get_details();
    return 0;
}