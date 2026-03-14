//Constructor with arguments :-- Assigning the parameters in constructor.
#include<iostream>
using namespace std;
class sample
{
	int a;
	int b;
	public:
		sample(int i,int j)
		{
			a=i;
			b=j;
		}
		void get()
		{
			cout<<"a"<<a;
			cout<<"b"<<b;
		}
};
int main()
{
	sample s1(10,20);
	s1.get();
}
