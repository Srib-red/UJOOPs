#include<iostream>
using namespace std;
class Animal{
    public:
        virtual void getDetails() = 0;
};
class Tiger: public Animal{
    public:
    void getDetails(){
        cout<<"BENGAL TIGER.\n";
    }
};
int main()
{
    Animal* a1 = new Tiger;
    a1->getDetails();
    delete a1;
    return 0;
}