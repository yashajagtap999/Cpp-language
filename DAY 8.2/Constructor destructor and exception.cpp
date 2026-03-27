//Constructor  ,Destructor and Exception.
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
