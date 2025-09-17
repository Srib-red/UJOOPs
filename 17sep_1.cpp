// main.cpp
#include <iostream>
using namespace std;
class vector;
class matrices
{
private:
    int arr[2][2];

public:
    matrices(int a, int b, int c, int d)
    {
        this->arr[0][0] = a;
        this->arr[0][1] = b;
        this->arr[1][0] = c;
        this->arr[1][1] = d;
    }
    void get_matrices()
    {
        cout << "|" << this->arr[0][0] << " " << this->arr[0][1] << "|" << endl
             << "|" << this->arr[1][0] << " " << this->arr[1][1] << "|" << endl;
    }
    friend vector vector_matrices_sangam(vector *v1, matrices *m1);
};

class vector
{
private:
    int arr2[2];

public:
    vector(int a, int b)
    {
        this->arr2[0] = a;
        this->arr2[1] = b;
    }
    void get_vector()
    {
        cout << "vector: " << this->arr2[0] << " " << this->arr2[1] << endl;
    }
    friend vector vector_matrices_sangam(vector *v1, matrices *m1);
};

vector vector_matrices_sangam(vector *v1, matrices *m1)
{
    vector v2(0, 0);
    v2.arr2[0] = m1->arr[0][0] * v1->arr2[0] + m1->arr[0][1] * v1->arr2[1];
    v2.arr2[1] = m1->arr[1][0] * v1->arr2[0] + m1->arr[1][1] * v1->arr2[1];

    return v2;
}
int main()
{
    matrices m1(1, 2, 3, 4);
    m1.get_matrices();
    vector v1(2, 3), v3(0, 0);
    v1.get_vector();

    v3 = vector_matrices_sangam(&v1, &m1);
    v3.get_vector();

    return 0;
}