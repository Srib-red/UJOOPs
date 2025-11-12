#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
class A {
public:
void show() { cout << "A::show()" << endl; }
void show(int x) { cout << "A::show(int): " << x << endl; }
};
class B : public A {
public:
using A::show; // bring all ’show’ from A into scope
void show(string s) { cout << "B::show(string): " << s << endl; }
};
int main() {
B obj;
obj.show();
obj.show(5);
obj.show("hi");
}
