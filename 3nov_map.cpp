#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<char, int> mp;
    string str1 = "Sai University";

    int n = str1.length();

    for (int j = 0; j < n; j++)
    {
        char ch = str1[j];
        if (ch == ' ')  // Optional: skip spaces
            continue;

        mp[ch] += 1;
    }

    for (auto k : mp)
    {
        cout << k.first << " appears " << k.second << " times" << endl;
    }

    return 0;
}
