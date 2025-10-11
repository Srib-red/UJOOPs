#include<iostream>
using namespace std;
class University{
    //string name;
    //int ID;
    public:
        virtual void display(){
            //cout<<"Name: "<<this->name<<" and Id: "<<this->Id<<endl;
            cout<<"Welcoem from class University(Bass)"<<endl;
        }
};

class student : public University{
    public:
    void display(){
        cout<<"Welcome from class student(Derived)"<<endl;
    }
};

int main()
{
    University *o1;
    University ob;
    o1 = &ob;
    o1->display();
    student* s1;
    student sb1;
    s1 = &sb1;
    s1->display();
    s1 = (student*)o1; /// S1(derived) -> O1(Base)
    s1->display();

    //if we use keyword virtual , it gonna call, where pointer is pointing
    // Welcoem from class University(Bass)
    // Welcome from class student(Derived)
    // Welcoem from class University(Bass)

    //No Virtual
    // Welcoem from class University(Bass)
    // Welcome from class student(Derived)
    // Welcome from class student(Derived)

    o1 = s1;//upcasting //dynamic binding
    s1->display();
    o1->display();
    // ob.display(); //static binding
    // sb1.display(); //static binding
    return 0;
}