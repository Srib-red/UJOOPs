#include <iostream>
using namespace std;
class anything{
    private:
        void greet_from_private(){
            cout<<"hello from greet private.\n";
        }
    public:
        void greet_from_public(){
            greet_from_private();
            cout<<"hello from greet public.\n";
        }
};
int main() {
    anything a1;
    a1.greet_from_public();
    //how to call greet_from_private ?? --> call it in public method
    return 0;
}