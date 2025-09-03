#include<iostream>
// #include<string>
using namespace std;

class details{
    private:
    string name,city;
    int marks;

    public:
    void set_values(string nm, string ct, int mk)
    {
        name = nm;
        city = ct;
        marks = mk;
    }
    void get_values(void)
    {
        cout<<"Name: "<<name<<endl<<"City: "<<city<<endl<<"Marks: "<<marks<<endl;
    }

};

int main(){
    details d1;
    string name, city;
    int marks;

    cout<<"enter your name: ";
    cin>>name;

    cout<<"enter your city: ";
    cin>>city;

    cout<<"enter your marks: ";
    cin>>marks;

    d1.set_values(name,city,marks);
    d1.get_values();

    return 0;
}