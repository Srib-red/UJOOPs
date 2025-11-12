#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> mp;
    int arr[] = {4,1,2,2,3,2,3,2,3,4,4,1,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int j = 0; j < n; j++)
    {
        mp[arr[j]]+=1;
    }
    for (auto k : mp)
    {
        cout<<k.first<<" Appears "<<k.second<<" times"<<endl;
    }

    auto it = mp.find(3); // you can find a kay here
    if(it != mp.end()){
        cout<<"key : "<<it->first<<" value : "<<it->second<<endl;
    }
    else
    {
        cout<<"key not found.\n";
    }
    
    return 0;
}
//####################################################################################

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {4,1,2,2,3,2,3,2,3,4,4,1,4,4};
//     for (int i = 0; i < sizeof(arr); i++)
//     {
//         int unique_elements[100];
//         int unique_count = 0;
        
//         for (int i = 0; i < count; i++)
//         {
//             /* code */
//         }
        
//     }
    
//     return 0;
// }
//######################################################################################

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 2, 3, 4, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     int uniqueArr[100];  // assuming max 100 elements
//     int uniqueCount = 0;

//     for (int i = 0; i < n; i++) {
//         bool isUnique = true;

//         // check if arr[i] already exists in uniqueArr
//         for (int j = 0; j < uniqueCount; j++) {
//             if (arr[i] == uniqueArr[j]) {
//                 isUnique = false;
//                 break;
//             }
//         }

//         // if not found, add to uniqueArr
//         if (isUnique) {
//             uniqueArr[uniqueCount] = arr[i];
//             uniqueCount++;
//         }
//     }

//     cout << "Array with unique elements: ";
//     for (int i = 0; i < uniqueCount; i++) {
//         cout << uniqueArr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
//######################################################################################