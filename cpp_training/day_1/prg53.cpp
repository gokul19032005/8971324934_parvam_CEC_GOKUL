#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    void getInput() {
        cout << "Enter student name: ";
        getline(cin, name);  
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

   
    void displayInfo() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s;

    s.getInput();       
    s.displayInfo();   

    return 0;
}