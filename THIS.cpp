#include<iostream>
using namespace std;
class number{
    int a;
    public:
        number(int a){
            this->a = a;
        }
        //this = &n1
        void print_this(void){
            cout<<"this: "<<this<<endl;         
        }
};
int main()
{
    number n1(12);
    n1.print_this();
    cout<<"&n1: "<<&n1;
    // this: 0x61ff0c
    // &n1: 0x61ff0c
    return 0;
}