class bank_ac
{
private:
    string name;
    int account_number;
    float balance;

public:
    bank_ac(string name, int an, float bal);
    void getdetails(void);
    void withdraw(float wd);
};