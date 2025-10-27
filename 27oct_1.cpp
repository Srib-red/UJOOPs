#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> remove_similar(vector<int> vv){
    vector<int> v1;
    for (int i : vv)
    {
        if (i)
        {
            /* code */
        }
        
    }
    
}
int main(){
    vector<int> v1(5,9);//{size, element} {9,9,9,9,9}
    for(int i: v1){
        cout <<i<<endl;
    }
    auto it = v1.begin();//pointing to first element of v1
    cout<<"element is: "<<*it<<endl;
    v1.insert(v1.begin(), 45);
    v1.insert(v1.end(),34);
    v1.insert(v1.begin()+1,373);
    v1.insert(v1.end()-2, 456);
    cout<<"size of vector: "<<v1.size()<<endl;
    v1.erase(v1.begin());
    v1.pop_back();
    v1.push_back(23);
    auto it1 = v1.rbegin();
    v1.insert(v1.begin()+3,3,67);
    set<int> s;
    for (int i : v1)
    {
        s.insert(i);
    }
    cout<<"set elements: "<<endl;
    for (int i : s)
    {
       cout<<i<<endl;
    }
    v1.assign(s.begin(),s.end());
    for
    
    cout<<"#####################################################################"<<endl;
    for (int i : v1)
    {
        cout<<i<<endl;
    }
    cout<<"#####################################################################"<<endl;
    // for (int it1 : v1)
    // {
    //     cout<<it1<<endl;
    // }
     cout<<"#####################################################################"<<endl;
     cout<<"size of vector: "<<v1.size()<<endl;
    return 0;
}