#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "enter a number : ";
    cin >> a;

    if ((a%5 == 0)&&(a%7 == 0))
    {
        cout<<"num is divisible by both 7 and 5 \n";
    }
    else if (a%5 == 0)
    {
        cout<<"num is divisible by 5\n";
    }
    else if (a%7 == 0)
    {
        cout<<"num is divisible by 7\n";
    }
    else
    {
        cout<<"neither 7 nor 5 \n";
    }
    
    
    
    return 0;
}
