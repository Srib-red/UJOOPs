#include<iostream>
using namespace std;
template <class T>
T Maximum(T x, T y){
    return x>y ? x:y;
}
int main()
{
    float a = 5.5, b = 5.8, c;
    c = Maximum<float>(a,b);
    // c = Maximum(a,b);
    cout<<"Maximum value c "<<c<<endl;
    int a1 = 7, b1 = 9, c1;
    c1 = Maximum<int>(a1,b1);
    // c1 = Maximum(a1,b1);
    cout<<"Maximum value c1 "<<c1<<endl;
    return 0;
}