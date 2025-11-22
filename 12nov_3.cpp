#include <iostream>
using namespace std;
class arraydyn
{
private:
    int size;
    int sum;
    int *arr = nullptr;

public:
    arraydyn(int siz)
    {
        this->size = siz;
        this->sum = 0;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            /* code */
            int x;
            cout << "User give input for [" << i << "] da: ";
            cin >> x;
            *(arr + i) = x;
        }
    }
    int return_max(){
        int largest = *(arr);
        for (int i = 1; i < size; i++)
        {
            /* code */
            if ((*(arr+i)) > (largest)){
                largest = *(arr+i);
            }
        }
    return largest;
    }
    int return_sq_sum(void)
    {
        for (int i = 0; i < size; i++)
        {
            this->sum += arr[i]*arr[i];
        }
        return this->sum;
    }
    ~arraydyn()
    {
        cout<<"destructor called. \n";
        delete[] arr;
        arr = nullptr;
    }
};
int main()
{
    int x;
    cout << "User give size da: ";
    cin >> x;
    arraydyn a1(x);
    int sum = a1.return_sq_sum();
    cout<<sum<<endl;
    cout<<a1.return_max()<<endl;
    return 0;
}