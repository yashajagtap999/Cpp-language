#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    Demo(int a = 0) {
        x = a;
    }

    // Pre-increment
    void operator++() {
        x++;
    }

    void display() {
        cout << x;
    }
};

int main() {
    Demo d(5);

    ++d;   // increment
    d.display();

    return 0;
}
