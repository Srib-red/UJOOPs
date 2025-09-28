#include <iostream>
using namespace std;
class university
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
class student
{
private:
    int ID;
    int course_code;
    string name;
    string school;

public:
    student(int id, int cc, string nam, string sch)
    {
        this->course_code = cc;
        this->ID = id;
        this->name = nam;
        this->school = sch;
    }
    void get_details_1()
    {
        cout << "Name: " << this->name << "  ID: " << this->ID << "  School: " << this->school << "  Course_Code: " << this->course_code << endl;
    }
};
int main()
{
    // Your code goes here
    university u1(123, "Santha");
    u1.get_details();
    student s1(12, 213, "Santha", "CDS");
    s1.get_details_1();
    return 0;
}