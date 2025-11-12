#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int> mp;
    char arr[] = {'a','a','b','b','b','b','c','c','c','d','d','d','d','d'};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int j = 0; j < n; j++)
    {
        mp[arr[j]]+=1;
    }
    for (auto k : mp)
    {
        cout<<k.first<<" Appears "<<k.second<<" times"<<endl;
    }

    return 0;
}