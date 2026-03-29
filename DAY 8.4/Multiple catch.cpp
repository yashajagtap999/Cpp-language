#include <iostream>
using namespace std;

int main() {
    try {
        int x = -1;

        if (x < 0)
            throw x;
    }
    catch (int e) {
        cout << "Integer exception: " << e;
    }
    catch (...) {
        cout << "Unknown exception";
    }

    return 0;
}
