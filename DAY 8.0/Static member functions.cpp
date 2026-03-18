//Static member function--It is a function which can be accessed outside the class and denoted by static name and called using class name
#include<iostream>
using namespace std;
class sample
{
	public:
		static int a;
		sample()
		{
			a++;
		}
		static void printd()
		{
			cout<<"I am static";
			cout<<"A:"<<a;
		}
};
int sample::a=0;
int main()
{
	sample s1;
	s1.printd();
	sample::printd();
}

