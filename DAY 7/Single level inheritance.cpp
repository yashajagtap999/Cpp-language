//Single level inheritance
#include<iostream>
using namespace std;
class Base
{
	public:
		int i;
		void printI()
		{
			cout<<"i:-"<<i<<endl;
		}
};
class Derived:public Base
{
	public:
		int j;
		void printJ()
		{
			cout<<"j:--"<<j<<endl;
		}
};
int main()
{
	Base B1;
	B1.i=20;
	B1.printI();
	Derived D1;
	D1.j=200;
	D1.printJ();
	D1.i=300;
	D1.printI();
	
}
