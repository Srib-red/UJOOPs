#include<iostream>
using namespace std;
class A{
    public:
        int a;
};
class B{
    public:
        int b;
};
//casting of unrelated class wont work
int main()
{
    A * oa;
    B * ob;
    //oa = ob; //pointers do not supports implicit casting
    oa = (A*)ob;
    oa->a = 4;
    cout<<"value of a: "<<oa->a<<endl;
    return 0;
}
