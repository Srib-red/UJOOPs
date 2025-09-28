#include<iostream>
using namespace std;
class number{
 
    public:
        int a;
        number(){
            this->a=0;
        }
        number(int a){
            this->a = a;
        }
        //this = &n1
        void print_this(void){
            cout<<"this: "<<this<<endl;
            // cout<<"*this: " << (*this) << endl;
        }
};
int main()
{
    number n1(12);
    number& n2 = n1;
    
    cout<<n2.a<<endl;
    cout<<"&n1: "<<&n1<<endl;
    cout<<"&n2: "<<&n2;
    return 0;
}