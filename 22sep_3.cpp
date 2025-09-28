#include <iostream>
using namespace std;
class university //Base Class
{
private:
    int ID;
    string name;

public:
    university(int id, string nam)
    {
        this->ID = id;
        this->name = nam;
    }
    void get_details()
    {
        cout << "Name: " << this->name << "  ID: " << this->ID << endl;
    }
};
// name_of_class : acess_type name_of derived_class
class student : private university//Derived Class
{
private:
    int course_code;
    string school;

public:
    student(int id, int cc, string nam, string sch): university(id, nam)
    {
        this->course_code = cc;
        this->school = sch;
    }
    void get_details_1()
    {
        get_details();
        cout << "School: " << this->school << "  Course_Code: " << this->course_code << endl;
    }
};
int main()
{
    
    student s1(12, 213, "Santha", "CDS");
    // s1.get_details();
    s1.get_details_1();
    return 0;
}