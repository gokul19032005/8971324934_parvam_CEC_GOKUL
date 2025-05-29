#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;
public:
    void input() {
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
    }
    double area() {
        return length * width;
    }
};

class Triangle {
private:
    double base, height;
public:
    void input() {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
    }
    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    Rectangle rect;
    Triangle tri;

    rect.input();
    cout << "Area of Rectangle: " << rect.area() << endl;

    tri.input();
    cout << "Area of Triangle: " << tri.area() << endl;

    return 0;
}