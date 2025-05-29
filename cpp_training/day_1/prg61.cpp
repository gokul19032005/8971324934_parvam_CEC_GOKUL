#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area() = 0; // Pure virtual function
};
class Rectangle : public Shape {
public:
    double length, width;
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;
    }
};
class Circle : public Shape {
public:
    double radius;
    Circle(double r) : radius(r) {}
    double area() override {
        return 3.14159 * radius * radius; // Using a constant for Pi
    }
};
int main() {
    Shape* shape1 = new Rectangle(5.0, 3.0);
    Shape* shape2 = new Circle(2.0);

    cout << "Area of Rectangle: " << shape1->area() << endl;
    cout << "Area of Circle: " << shape2->area() << endl;

    delete shape1; 
    delete shape2;

    return 0;
}