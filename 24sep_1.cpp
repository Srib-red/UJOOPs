#include <iostream>
using namespace std;
class my_array{
    private:
        int n;
        int i = 0;
        int * arr;
         
    public:
        my_array(int size){
            this->n = size;
            cout<<"Size of an array is: "<< n <<endl;
            arr = new int[n];
        }
        void append(int value){
            if(i < n) {  // Add bounds checking
                arr[i] = value;
                i++;
            } else {
                cout << "Array is full, cannot append more elements!" << endl;
            }
        }
        void getter(){
            for(int j=0; j<i ; j++){
                cout<<arr[j]<<endl;
            }
        }
        void Search_Dynamic_array(int x){
            for (int i = 0; i < n; i++)
            {
                /* code */
            }
            
        }
        ~my_array(){
            delete[] arr;
            cout<<"Destructor has been called.\n";

        }
};
int main() {
    // Your code goes here
    my_array m1(5);
    m1.append(1);
    m1.append(2);
    m1.append(3);
    m1.append(4);
    m1.append(5);
    m1.getter();
    return 0;
}