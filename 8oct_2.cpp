#include<iostream>
using namespace std;
int main()
{
    int i = 2;
    double j = 3.5;
    int * iptr = &i;
    double * dptr = &j;

    cout<<"iptr: "<<iptr<<endl;
    //iptr = dptr; //implicit casting doesnt work pointers
    iptr = (int*)dptr; //double to integer
    cout<<"iptr[(int*)dptr]: "<<iptr<<endl<<endl;
    cout<<"dptr: "<<dptr<<endl;
    dptr = (double *)iptr;
    cout<<"dptr[(double *)iptr]: "<<dptr<<endl<<endl;
    cout<<*iptr<<endl;
    cout<<*dptr<<endl;
    return 0;
}