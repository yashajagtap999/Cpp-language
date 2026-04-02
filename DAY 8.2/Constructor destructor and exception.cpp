/*Constructor  ,Destructor and Exception :-- Constructor: A special member function in C++ that is automatically called when an object is created to initialize it.
Destructor: A special member function in C++ that is automatically called when an object is destroyed to free resources.*/
#include<iostream>
using namespace std;
class Sample
{
	public:
		Sample()
		{
			cout<<"Constructor invokrd"<<endl;
		}
		~Sample()
		{
			cout<<"Destructor invoked"<<endl;
		}
};
int main()
{
	try
	{
		Sample s1;
		throw(1);
	}
	catch(int s1)
	{
		cout<<"Exception handled";
	}
}
