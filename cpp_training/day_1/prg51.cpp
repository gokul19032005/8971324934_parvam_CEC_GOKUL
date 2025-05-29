#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setValues(double l, double w) {
        length = l;
        width = w;
    }
    void displayArea() {
        cout << "Area: " << length * width << endl;
    }
};

int main() {
    Rectangle rect;
    double len, wid;
    cout << "Enter length: ";
    cin >> len;
    cout << "Enter width: ";
    cin >> wid;
    rect.setValues(len, wid);
    rect.displayArea();
    return 0;
}