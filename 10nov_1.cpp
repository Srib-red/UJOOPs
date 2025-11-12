#include<iostream>
using namespace std;
int function(int x, int y){
    return x>y ? x:y;
}
float function(float x, float y){
    return x>y ? x:y;
}
int main()
{
    int a = 5, b = 8;
    int c = function(a,b);
    cout<<"Maximum value is "<<c<<endl;
    float a1 = 5.5, b1 = 5.7;
    float c1 = function(a1,b1);
    cout<<"Maximum value is "<<c1<<endl;
    return 0;
}