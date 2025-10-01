#include <iostream>
using namespace std;
class Student
{
    int roll_no;
    string name;

public:
    Student(int roll, string nam)
    {
        this->roll_no = roll;
        this->name = nam;
    }
    void get_info(void)
    {
        cout << "Name: " << this->name << ", Roll_No.: " << this->roll_no << endl;
    }
};
class math_course
{
    string course;
    int no_assign;

public:
    math_course(string cour, int ass)
    {
        this->course = cour;
        this->no_assign = ass;
    }
    void get_info_math(void)
    {
        cout << "Course: " << this->course << ", no_assignment: " << this->no_assign << endl;
    }
};
class registry : public Student, public math_course
{
    bool k;

public:
    registry(bool k, int assign, string cour, string name, int roll_no) : math_course(cour, assign), Student(roll_no, name)
    {
        if (k == true)
            cout << "Verified!!!.\n";
        else
            cout << "not Verified!!!.\n";
    }
};
int main()
{
    registry r1(true, 12, "LA", "Sorap", 34);
    r1.get_info();
    r1.get_info_math();
    return 0;
}