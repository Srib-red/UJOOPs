#include<iostream>
using namespace std;

// #include<string>
#include"head.h"
books ::books(string nam, int i){
    this->name = nam;
    this->id = i;
}
void books ::get_details(void){
    cout<<"Book name: "<<this->name<<" || Book_ID: "<<this->id<<endl;
}