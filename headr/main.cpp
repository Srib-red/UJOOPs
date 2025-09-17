#include <iostream>
using namespace std;
#include "thead.h"

int main()
{
    bank_ac b1("Renga Ramanesh", 123, 100000.5);
    b1.withdraw(1000.5);
    b1.getdetails();
    return 0;
}