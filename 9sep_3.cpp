

#include <iostream>
using namespace std;

class polynomial
{
private:
    int *arr;

public:
    // Constructor
    polynomial(int a, int b, int c)
    {
        arr = new int[3];
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        cout << "Constructor called: " << a << "x^2 + " << b << "x + " << c << endl;
    }
    
    // Copy constructor
    polynomial(const polynomial &p)
    {
        arr = new int[3];
        arr[0] = p.arr[0];
        arr[1] = p.arr[1];
        arr[2] = p.arr[2];
        cout << "Copy constructor called for: " << arr[0] << "x^2 + " << arr[1] << "x + " << arr[2] << endl;
    }
    
    // Assignment operator (this was missing in your code!)
    polynomial& operator=(const polynomial &p)
    {
        if (this != &p) // Self-assignment check
        {
            arr[0] = p.arr[0];
            arr[1] = p.arr[1];
            arr[2] = p.arr[2];
            cout << "Assignment operator called for: " << arr[0] << "x^2 + " << arr[1] << "x + " << arr[2] << endl;
        }
        return *this;
    }
    
    // Addition operator
    polynomial operator+(const polynomial &second_obj)
    {
        polynomial result(0, 0, 0);
        result.arr[0] = this->arr[0] + second_obj.arr[0];
        result.arr[1] = this->arr[1] + second_obj.arr[1];
        result.arr[2] = this->arr[2] + second_obj.arr[2];
        cout << "Addition performed" << endl;
        return result;
    }
    
    void get_details(void)
    {
        cout << "Polynomial value is: " << this->arr[0] << "x^2 + " << this->arr[1] << "x + " << this->arr[2] << endl;
    }
    
    // Destructor
    ~polynomial()
    {
        delete[] arr;
        arr = nullptr;
        cout << "Destructor called" << endl;
    }
};

int main()
{
    cout << "=== Creating polynomials ===" << endl;
    polynomial p1(1, 2, 4);
    polynomial p2(3, 4, 5);
    polynomial p3(0, 0, 0);
    
    cout << "\n=== Performing addition and assignment ===" << endl;
    p3 = p1 + p2;
    
    cout << "\n=== Getting details ===" << endl;
    p3.get_details();
    
    cout << "\n=== Program ending - destructors will be called ===" << endl;
    return 0;
}