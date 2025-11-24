#include<iostream>
using namespace std;
class A{
    private:
        const int a;
        int b;
    public:
        A(int a1, int b1):a(a){//works even when a is const
            // this->a = a1; error
            this->b = b1;
        }
};
int main()
{
    
    return 0;
}