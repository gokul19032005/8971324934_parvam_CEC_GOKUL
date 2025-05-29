#include <iostream>
using namespace std;

class Base {
protected:
    int x; 
public:
    Base() {
    x = 7 ;
    }
};

class Derived : public Base {
public:
    void showX() {
        cout << "Value of protected member x: " << x << endl;
    }
};

int main() {
    Derived obj;
    obj.showX(); 
    return 0;
}