#include<iostream>
using namespace std;
class complex{
    private:
    float a;
    float b;
    public:
    complex(float x, float y){
        this->a = x;
        this->b = y;
        cout<<"New number has been created: "<<this->a<<" + i"<<this->b<<endl;
    }
};
int main(){
    complex c1(6,5),c2(2,3),c4(0,0);
    c4 = c1 - c2;
    c4.get_details();
    return 0;
}
