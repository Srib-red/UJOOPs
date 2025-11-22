#include<iostream>
using namespace std;
#define maximum 100
#define PI 3.14
// #define cube(x) (x*x*x)
// #undef cube
int main()
{
    cout<<"maximum value is "<<maximum<<endl;
    cout<<"PI value is "<<PI<<endl;
    #ifndef cube
    #define cube(y) (y*y)
    cout<<"cube of 8 is "<<cube(8)<<endl;
    #endif
    return 0;
}