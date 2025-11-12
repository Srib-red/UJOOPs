#include<iostream>
using namespace std;
template<class T, int size>
T arrmaximum(T x[size])
{
    T y = x[0];
    for(int i = 1; i < size; i++){
        if(x[i]>y){
            y = x[i];
        }
    }
    return y;
}

int main()
{

    float arr[7] = {43.4,5.6,7.4,3.5,6.3,53.5,543.2};
    float c = arrmaximum<float ,7>(arr);
    cout<<"Maximum element is "<<c<<endl;
    return 0;

}