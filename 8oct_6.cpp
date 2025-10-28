#include <iostream>
using namespace std;
class BASE
{
    // string name;
    // int ID;
public:
    virtual void display()
    {
        // cout<<"Name: "<<this->name<<" and Id: "<<this->Id<<endl;
        cout << "Welcoem from class BASE(Bass)" << endl;
    }
};

class Derived : public BASE
{
public:
    void display()
    {
        cout << "Welcome from class Derived(Derived)" << endl;
    }
};

int main()
{
    BASE *BASE_ptr;
    BASE BASE_obj;
    BASE_ptr = &BASE_obj;

    BASE_ptr->display();
// ##########################################################################

    Derived *Derived_ptr;
    Derived Derived_obj;
    Derived_ptr = &Derived_obj;

    Derived_ptr->display();
    cout<<endl;
// ##########################################################################

    Derived_ptr = (Derived *)BASE_ptr; /// Derived_ptr(derived) -> BASE_ptr(Base)
    Derived_ptr->display();

// ##########################################################################  
    // if we use keyword virtual , it gonna call, where pointer is pointing
    //  Welcoem from class BASE(Bass)
    //  Welcome from class Derived(Derived)
    //  Welcoem from class BASE(Bass)

    // No Virtual
    //  Welcoem from class BASE(Bass)
    //  Welcome from class Derived(Derived)
    //  Welcome from class Derived(Derived)
// ##########################################################################


    // BASE_ptr = Derived_ptr;//upcasting //dynamic binding
    // BASE_ptr->display();

// ##########################################################################
    // BASE_obj.display(); //static binding
    // Derived_obj.display(); //static binding

    return 0;
}