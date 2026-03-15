// It is a 2 parent class and 1 derived class.
#include <iostream>
using namespace std;

class Father
{
public:
    void showFather()
    {
        cout << "This is Father class" << endl;
    }
};

class Mother
{
public:
    void showMother()
    {
        cout << "This is Mother class" << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void showChild()
    {
        cout << "This is Child class" << endl;
    }
};

int main()
{
    Child obj;

    obj.showFather();
    obj.showMother();
    obj.showChild();

    return 0;
}
