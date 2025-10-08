#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    static double pi; // Static member for π

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Function to calculate area
    double area() {
        return pi * radius * radius;
    }

    // Static function to set/update π
    static void setPi(double newPi);
};

void Circle ::setPi(double newPi){
    pi = newPi;
}

// Initialize static member
double Circle::pi = 3.141592653589793;

int main() {
    Circle c1(5);

    cout << "Default π, Area of circle: " << c1.area() << endl;

    // Update π using static function
    Circle::setPi(3.14);
    // c1.setPi(3.14);

    cout << "Updated π, Area of circle: " << c1.area() << endl;

    return 0;
}
