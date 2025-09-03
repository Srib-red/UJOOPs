#include<iostream>
using namespace std;

class details{
    private:
    string name;
    int roll_no;
    float m1,m2,m3,m4,m5;

    public:
    void set_value(int rn, float M1, float M2, float M3, float M4, float M5, string nm)
    {
        roll_no = rn;
        m1 = M1;
        m2 = M2;
        m3 = M3;
        m4 = M4;
        m5 = M5;
        name = nm;
    }

    void get_value(void)
    {
        cout<<"name: "<<name<<endl<<"roll_no: "<<roll_no<<endl<<"m1: "<<m1<<endl<<"m2: "<<m2<<endl<<"m3: "<<m3<<endl<<"m4: "<<m4<<endl<<"m5: "<<m5<<endl;   
    }
    
};

int main(){
    details d1;
    d1.set_value(12,34.5,87.11,100,34.56,94.11,"Bala");
    d1.get_value();
    // d1.roll_no = 5;
    return 0;
}