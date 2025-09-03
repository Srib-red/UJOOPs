#include<iostream>
using namespace std;

class details{
    public:
    string name;
    int roll_no;
    float marks;
};

int main()
{
  details d1;
  d1.name = "BALABALA";
  d1.marks = 67.0;
  d1.roll_no = 12;
  cout<<"Name: "<<d1.name<<endl<<"Roll_no: "<<d1.roll_no<<endl<<"Marks: "<<d1.marks<<endl;    

return 0;
}