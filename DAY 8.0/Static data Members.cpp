//Static Data members 
#include<iostream>
using namespace std;
class sample
{
	public:
		int a;
		static int b;
		sample()
		{
			cout<<"Enter value of a:";
			cin>> a;
			b++;
		}
		void get()
		{
			cout<<"b:"<<b;
		}
};
int sample::b=0;
int main()
{
	sample s1,s2;
	s1.get();
	s2.get();
}

