#include<iostream>
using namespace std;
class Base1{
    public:
    ~Base1(){std :: cout << "~Base()\n";}
};
class Dervied1 : public Base1{
    ~Dervied1(){std :: cout << "~Dervied()\n";}
};
class Base2{
    public:
    virtual ~Base2(){std :: cout << "~Base2()\n";}
};
class Dervied2 : public Base2{
    ~Dervied2(){std :: cout << "~Dervied2()\n";}
};

int main()
{
    Base1* bp = new Dervied1;
    delete bp;
    Base2* b2p = new Dervied2;
    delete b2p;
    return 0;
}