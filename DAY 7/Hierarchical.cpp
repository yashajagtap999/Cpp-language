#include <iostream>
using namespace std;

// Base Class
class Shape
{
public:
    void display()
    {
        cout << "This is a Shape class" << endl;
    }
};

// Derived Class 1
class Rectangle : public Shape
{
public:
    void area()
    {
        int l = 5, b = 4;
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

// Derived Class 2
class Triangle : public Shape
{
public:
    void area()
    {
        int b = 6, h = 3;
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main()
{
    Rectangle r;
    Triangle t;

    r.display();
    r.area();

    t.display();
    t.area();

    return 0;
}
