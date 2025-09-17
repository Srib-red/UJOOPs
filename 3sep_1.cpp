#include <iostream>
#include <string>
using namespace std;
class state_bank
{
private:
    string name;
    int account_num;
    float bal;

public:
    static float total_balance;
    state_bank(string n, int a, float b)
    {
        this->name = n;
        this->bal = b;
        this->account_num = a;
        this->total_balance = total_balance + b;
    }

    void get_details(void)
    {
        cout << "name: " << this->name << "\naccount_num: " << this->account_num << "\nbalance: " << this->bal << endl;
        cout << "total_balance: " << this->total_balance << endl;
    }
};
float state_bank ::total_balance = 0; // class variable
int main()
{
    state_bank a1("Aashif", 4545, 100);
    a1.get_details();
    cout << "Total Balance: " << state_bank ::total_balance << endl;
    state_bank a2("Renga", 6969, 200);
    a2.get_details();
    return 0;
}
