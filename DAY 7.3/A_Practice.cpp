#include <iostream>
using namespace std;

// Abstract class
class Vehicle {
public:
    // Pure virtual function
    virtual void startEngine() = 0;
};

// Derived class
class Car : public Vehicle {
public:
    void startEngine() {
        cout << "Car engine started with key" << endl;
    }
};

// Derived class
class Bike : public Vehicle {
public:
    void startEngine() {
        cout << "Bike engine started with self-start button" << endl;
    }
};

int main() {
    Vehicle* v;

    Car c;
    Bike b;

    v = &c;
    v->startEngine();

    v = &b;
    v->startEngine();

    return 0;
}
