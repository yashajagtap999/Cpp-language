#include <iostream>
using namespace std;

// Base Class
class Person
{
public:
    void showPerson()
    {
        cout << "This is Person class" << endl;
    }
};

// Derived Class 1
class Student : public Person
{
public:
    void showStudent()
    {
        cout << "This is Student class" << endl;
    }
};

// Derived Class 2
class Employee : public Person
{
public:
    void showEmployee()
    {
        cout << "This is Employee class" << endl;
    }
};

// Derived from Student and Employee
class Result : public Student, public Employee
{
public:
    void showResult()
    {
        cout << "This is Result class (Hybrid Inheritance)" << endl;
    }
};

int main()
{
    Result r;

    r.Student::showPerson();
    r.Employee::showPerson();
    r.showStudent();
    r.showEmployee();
    r.showResult();

    return 0;
}
