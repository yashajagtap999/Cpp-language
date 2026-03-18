//Static member function
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

