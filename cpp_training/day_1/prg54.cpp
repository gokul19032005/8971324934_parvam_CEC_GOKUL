#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b); 
};


int Calculator::add(int a, int b) {
    return a + b;
}

int main() {
    Calculator gokoo;
    int result = gokoo.add(10,20);
    cout << "Sum: " << result << endl;
    return 0;
}