#include<iostream>
using namespace std;
class sample
{
	public:
		int a;
		static int b;
		sample()
		{
			b++;
		}
		void get()
		{
			cout<<"enter a:";
			cin>>a;
			cout<<"b"<<b;
		}
};
int sample::b=1;
int main()
{
	sample s1;
	s1.get();
}
