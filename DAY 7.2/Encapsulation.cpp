//Encapsulation:-- It is a process of binding the data and functions together to protect the security of data
#include <iostream>
using namespace std;

class Bank {
private:
    int acc_no;        // private data
    string name;
    double balance;

public:
    // setter methods
    void setData(int a, string n, double b) {
        acc_no = a;
        name = n;
        balance = b;
    }

    // getter methods
    int getAccNo() {
        return acc_no;
    }

    string getName() {
        return name;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    Bank b1;

    b1.setData(101, "Yash", 50000);

    cout << "Account No: " << b1.getAccNo() << endl;
    cout << "Name: " << b1.getName() << endl;
    cout << "Balance: " << b1.getBalance() << endl;

    return 0;
}
