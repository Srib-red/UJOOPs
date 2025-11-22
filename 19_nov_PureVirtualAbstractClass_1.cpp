#include<iostream>
using namespace std;
class Animal{
    public:
    //     virtual void getDetails() = 0;
    virtual void getDetails()
    {
        cout<<"Hello from animal world.\n";
    }
};
class Tiger: public Animal{
    public:
    void getDetails(){
        Animal::getDetails();
        cout<<"BENGAL TIGER.\n";
    }
};
class Horse: public Animal{
    public:
    void getDetails(){
        Animal::getDetails();
        cout<<"ARABIAN HORSE.\n";
    }
};
class cats: public Tiger{
   public:
    void getDetails(){
        Animal::getDetails();
        cout<<"PERSIAN CAT.\n";
    } 
};
int main()
{
    // Animal* a1 = new Tiger;
    // Animal* h1 = new Horse;
    // Animal* c1 = new cats;
    // a1->getDetails();
    // h1->getDetails();
    // c1->getDetails();
    // delete a1;
    // delete h1;
    // delete c1;
    
    Animal* arr[] = { new Tiger, new Horse, new cats };

    for (int i = 0; i < 3; i++) {
        arr[i]->getDetails();
    }

    // Correct deletion
    for (int i = 0; i < 3; i++) {
        delete arr[i];
    }

    return 0;
}