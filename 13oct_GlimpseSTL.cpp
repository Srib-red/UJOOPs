#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> vect1 = {"santha", "madum", "renga"};
    cout << vect1.at(2) << endl;
    // cout<< vect1.at(4);
    vect1.push_back("pinga");
    cout << vect1.at(3) << endl;
    cout << vect1.size() << endl;
    vect1.pop_back();
    return 0;
}