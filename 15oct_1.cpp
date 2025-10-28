#include<iostream>
using namespace std;
namespace mything{
    int uv;
    void great(){
        cout<<"good afternoon"<<endl;
    }
    class simple{
        int a;
        public:
            simple(int n){
                this->a = n;
            }
            void get_value(){
                cout<<"value of a: "<<a<<endl;
            }
    };
};
using namespace mything;
int main()
{
    // mything::uv = 10;
    uv = 10;
    // cout<<"value of uv is: "<<mything::uv<<endl;
    cout<<"value of uv is: "<<uv<<endl;
    // mything::great();
    // mything::simple s(6);
    great();
    simple s(6);
    s.get_value();
    return 0;
}