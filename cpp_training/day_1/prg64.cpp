#include <iostream>
using namespace std;
class Employee {
protected:
    int id;
    string name;
    float salary;
public:
    Employee(int i, string n, float s) : id(i), name(n), salary(s) {}

    virtual void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};
class Manager : public Employee {
private:
    float bonus;
public:
    Manager(int i, string n, float s, float b) : Employee(i, n, s), bonus(b) {}

    void display() override {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << (salary + bonus) << endl;
    }
};
class Developer : public Employee {
private:
    float overtimePay;
public:
    Developer(int i, string n, float s, float o) : Employee(i, n, s), overtimePay(o) {}

    void display() override {
        Employee::display();
        cout << "Overtime Pay: " << overtimePay << endl;
        cout << "Total Salary: " << (salary + overtimePay) << endl;
    }
};
int main() {
    Manager mgr(1, "Alice", 80000, 5000);
    Developer dev(2, "Bob", 70000, 2000);

    cout << "Manager Details:" << endl;
    mgr.display();
    cout << endl;

    cout << "Developer Details:" << endl;
    dev.display();

    return 0;
}