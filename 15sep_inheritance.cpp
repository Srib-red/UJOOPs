#include<iostream>
#include<string>
using namespace std;
class university{
    private:
      string name;
      int id;
    public:
    university(string nam, int i){
        this->id = i;
        this->name = nam;
        cout<<"A new member: "<<this->name<<" | Id: "<<id<<endl;
    }
    void getdetails(void){
        cout<<"Name: "<<this->name<<" | Id: "<<id<<endl;
    }

};

class students : public university{
    private:
      string school;
    public:
      students(string name, int id, string school): university(name,id){
        this->school = school;
      }
      void get_studentsdetails(void){
        getdetails();
        cout<<"school: "<<school<<endl;
      }
};
int main(){
    students s1("renga", 123, "CDS");
    s1.get_studentsdetails();
    return 0;
}

