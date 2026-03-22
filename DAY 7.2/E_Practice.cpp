#include <iostream>
using namespace std;

class Student {
private:
    int marks;   // hidden data

public:
    // setter with validation
    void setMarks(int m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks!" << endl;
        }
    }

    // getter
    int getMarks() {
        return marks;
    }
};

int main() {
    Student s1;

    s1.setMarks(85);     // valid
    cout << "Marks: " << s1.getMarks() << endl;

    s1.setMarks(150);    // invalid
    cout << "Marks: " << s1.getMarks() << endl;

    return 0;
}
