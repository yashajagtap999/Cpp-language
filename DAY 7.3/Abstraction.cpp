#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* s1;
    Circle c;
    Rectangle r;

    s1 = &c;
    s1->draw();

    s1 = &r;
    s1->draw();

    return 0;
}
