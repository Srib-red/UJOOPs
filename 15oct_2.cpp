#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
// namespace somename{
// int abs1(int n){
//     return 99;
// }
// }
// using namespace somename;
namespace anyone{
int sqrt(int n){
    return n*n;
}
}
using namespace anyone;
int main()
{
    // int a = -5;
    // // int b = somename::abs1(a);
    // int b = abs1(a);
    // cout<<"value of b is: "<<b<<endl;

    int c = 9;
    cout<<"value sqrtb: "<<sqrt(c)<<endl;
    // cout<<"value sqrtb: "<<anyone::sqrt(c)<<endl;
    return 0;
}