#include <iostream>
using namespace std;
class Univarsity
{
    int id;

protected:
    string name;

public:
    Univarsity(int i, string nam)
    {
        this->id = i;
        this->name = nam;
    }
    void getter(void)
    {
        cout << "Name: " << this->name << ", Id: " << this->id << endl;
    }
};
class Students : public Univarsity
{
    int roll_no;
    string school;

public:
    Students(int roll, string sch, string nam, int id) : Univarsity(id, nam)
    {
        this->roll_no = roll;
        this->school = sch;
    }
    void getter()
    {
        cout << "Roll_No.: " << this->roll_no << ", School: " << this->school << endl;
    }
    // void getter_student()
    // {
    //     cout << "Roll_No.: " << this->roll_no << ", School: " << this->school << endl;
    // }
};
class Class_rep : public Students
{
    int task;
    string course;

public:
    Class_rep(int task, string course, int roll, string sch, int i, string nam) : Students(roll, sch, nam, i)
    {
        this->task = task;
        this->course = course;
    }
    void getter(void)
    {
        cout << "Task: " << this->task << ", Course: " << this->course << endl;
    }
    // void getter_CR(void)
    // {
    //     cout << "Task: " << this->task << ", Course: " << this->course << endl;
    // }
};

// class President : public Class_rep
// {
//     bool is_president;
//     string Pres;

// public:
//     President(string n_P, int task, string course, int roll, string sch, int i, string nam) : Class_rep(task, course, roll, sch, i, nam)
//     {
//         this->Pres = n_P;
//     }
// };
int main()
{
    Class_rep CR1(12, "ICD", 23, "CDS", 34, "Aajib");
    CR1.Univarsity::getter();
    CR1.Students::getter();
    CR1.getter();
    // CR1.getter_CR();
    // CR1.getter_student();
    return 0;
}