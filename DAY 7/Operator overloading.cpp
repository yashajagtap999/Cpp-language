//Operator overloading
#include<iostream>
using namespace std;
class overload
{
	public:
		int a;
		int b;
	overload(int i,int j)
	{
		a=i;
		b=j;
	}
	void operator+(overload s)
	{
		cout<<"The value of a is:--"<<a+s.a<<endl;
		cout<<"The value of b is:--"<<b+s.b;
	}
};
int main()
{
	overload s1(100,10);
	overload s2(101,11);
	s1+s2;
	
}
