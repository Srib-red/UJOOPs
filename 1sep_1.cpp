#include<iostream>
#include<string>
using namespace std;
class bank_account{

    private:
    string name;
    float bal;
    public:
    void set_value(string n, float b)
    {
        this -> name = n;
        this -> bal = b;
    }

    void get_values(void)
    {
        cout<<"name: "<<this->name<<endl <<"balance: "<<this->bal<<endl;
    }

    void deposit(float n1){
        this->bal = this->bal + n1;
    }

    void withdraw(){
        float n1;
        cout<<"enter amount to withdraw: ";
        cin>>n1;
        if (this->bal <= n1)
        {
            this->bal = 0;
            cout<<"Your current balance is zero.";
        }
        else
        {
            this->bal = this->bal-n1;
            cout<<"your current balance is: "<<this->bal;
        }
        
    }

};
int main(){
    bank_account a1;
    bank_account a2;
    a1.set_value("Alok",10000.9);
    a2.set_value("Sorup",13245.8);
    a1.get_values();
    a2.get_values();
    a1.deposit(5000.5);
    a2.deposit(500);
    // a1.get_values();
    // a2.get_values();
    a2.withdraw();
    a1.get_values();
    a2.get_values();
    return 0;
}