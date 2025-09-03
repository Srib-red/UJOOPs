#include<iostream>
using namespace std;

class xy_coordinates{

    private:
    float x;
    float y;

    public:
    void set_value(float a1, float b1);
    void get_value(void);

    //constructor 
    // xy_coordinates(){ //defualt constructor
    //     cout<<"hello world !"<<endl;
    //     this->x = 22;
    //     this->y = 12;
    // }

    xy_coordinates(float n1, float n2)
    {
        this->x = n1;
        this->y = n2;
    }

    xy_coordinates(float n3)
    {
        this->x = n3;
        this->y = 0;
    }
};

void xy_coordinates ::set_value(float a1,float a2)
{
    this->x = a1;
    this->y = a2;
}

void xy_coordinates ::get_value(void)
{
    cout<<"x: "<<this->x<<endl<<"y: "<<this->y<<endl;
}

int main(){
    xy_coordinates s1(12,34), s2(67);
    // s1.set_value(3,4);
    s1.get_value();
    s2.get_value();
    return 0;
}

//this == self(of python)