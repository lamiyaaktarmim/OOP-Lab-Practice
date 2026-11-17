#include <iostream>
using namespace std;

class Shape {
protected:
    double dimension;

public:
    Shape(double d)
    {
        dimension = d;
    }

    virtual void calculateArea() = 0;

    virtual ~Shape() {}
};

class Square : public Shape {
public:
    Square(double side) : Shape(side) {}

    void calculateArea() {
        cout << "Area of Square: "
             << dimension * dimension << endl;
    }
};

class Circle : public Shape {
public:
    Circle(double radius) : Shape(radius) {}

    void calculateArea() {
        cout << "Area of Circle: "
             << 3.1416 * dimension * dimension << endl;
    }
};

int main()
{
    double side, radius;

    cout << "Enter square side: ";
    cin >> side;

    cout << "Enter circle radius: ";
    cin >> radius;

    Square s(side);
    Circle c(radius);

    s.calculateArea();
    c.calculateArea();

    return 0;
}

