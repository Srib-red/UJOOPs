#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    double b = 6.6, c = 5.5;
    cout<<"value of b: "<<b<<endl;
    b = a;//int to double //implicit casting
    b = (double)a;//explicit casting //doing purposefully
    cout<<"value of b: "<<b<<endl;
    a=c;// double to int //implicit casting
    a=(int)c;//explicit casting
    cout<<"value of a: "<<a<<endl;
    cout<<"value of c: "<<c<<endl;
    return 0;
}