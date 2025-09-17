#include <iostream>
using namespace std;
#include "thead.h"

bank_ac ::bank_ac(string name, int an, float bal)
{
    this->account_number = an;
    this->name = name;
    this->balance = bal;
}

void bank_ac ::getdetails(void)
{
    cout << "name: Mr." << this->name << " | Account_number: " << this->account_number << endl;
    cout << "balance: " << this->balance;
}

void bank_ac ::withdraw(float wd)
{
    if (wd >= this->balance)
    {
        this->balance = 0;
        cout << "Your balance is zero.\n";
    }
    else
    {
        this->balance = this->balance - wd;
    }
}