#include <iostream>
using namespace std;
class Employee {
public:
    int id;
    string name; 
    float salary; 

    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};
int main() {
    Employee emp1(1, "funn", 50000);
    Employee emp2(2, "kirans", 60000);
    Employee emp3(3, "madhu", 70000);

    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}