#include<iostream>
using namespace std;
template<class T>
T swapper (T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 5, b = 6;
    swapper<int>(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl;
    float a1 = 3.5, b1 = 5.6;
    swapper<float>(a1,b1);
    cout<<"a1: "<<a1<<" b1: "<<b1<<endl;
    string s1("Balaji"), s2("Bala Ts");
    swapper<string>(s1,s2);
    cout<<"s1: "<<s1<<" s2: "<<s2<<endl;
    return 0;
}