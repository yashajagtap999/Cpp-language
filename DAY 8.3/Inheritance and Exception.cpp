
#include<iostream>
using namespace std;
class Parent{};
class Child:public Parent{};
int main()
{
	try
	{
		Child c1;
		throw(c1);
		Parent p1;
		throw(p1);
	}
	catch(Child &c1) //catching child object by reference
	{
		cout<<"Exception of child";
	}
	catch(Parent &p1)//catching parent object by reference
	{
		cout<<"Exception of parent";
	}
	
}

