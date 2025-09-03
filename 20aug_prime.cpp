#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cout<<"enter an integer : "<<endl;
    cin>>a;
    for (int i = 2; i*i < a; i++)
    {
        if (a%i == 0){
            cout<<"Number is not prime."<<endl;
            return 0;
        }
        
    }
    cout<<"number is prime."<<endl;
    return 0;

}