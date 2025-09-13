#include<iostream>
using namespace std;
class complex{

    private:
    float x;
    float y;

    public:
    static int count;
    complex(float a, float b){

        this->x = a;
        this->y = b;
        count++;
        cout<<"This is: "<<count<<" complex number: "<<endl;
    }
    void get_details(void){
        cout<<"x: "<<this->x<<"\ny: "<<this->y<<endl;
    }
          void sum_complex(complex a1, complex a2){
            cout<<"Sum of complex: "<<a1.x+a2.y<<" + i"<<a1.y+a2.y<<endl;
          }
              
};

int complex :: count = 0;
int main(){
    complex c1(2,3);
    c1.get_details();
    complex c2(4,5);
    c2.get_details();
    c1.sum_complex(c1,c2);
    return 0;
}