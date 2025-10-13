#include <iostream>
using namespace std;
class University
{
    // string name;
    // int ID;
public:
    virtual void display()
    {
        // cout<<"Name: "<<this->name<<" and Id: "<<this->Id<<endl;
        cout << "Welcoem from class University(Bass)" << endl;
    }
};

class student : public University
{
public:
    void display()
    {
        cout << "Welcome from class student(Derived)" << endl;
    }
};

int main()
{
    University *university_ptr;
    University university_obj;
    university_ptr = &university_obj;

    university_ptr->display();
// ##########################################################################

    student *student_ptr;
    student student_obj;
    student_ptr = &student_obj;

    student_ptr->display();
    cout<<endl;
// ##########################################################################

    student_ptr = (student *)university_ptr; /// student_ptr(derived) -> university_ptr(Base)
    student_ptr->display();

// ##########################################################################  
    // if we use keyword virtual , it gonna call, where pointer is pointing
    //  Welcoem from class University(Bass)
    //  Welcome from class student(Derived)
    //  Welcoem from class University(Bass)

    // No Virtual
    //  Welcoem from class University(Bass)
    //  Welcome from class student(Derived)
    //  Welcome from class student(Derived)
// ##########################################################################


    // university_ptr = student_ptr;//upcasting //dynamic binding
    // university_ptr->display();

// ##########################################################################
    // university_obj.display(); //static binding
    // student_obj.display(); //static binding

    return 0;
}