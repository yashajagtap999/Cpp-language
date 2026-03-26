//Pointer to Object:--

#include<iostream>
using namespace std;
class Sample
{
	public:
		int n1;
	Sample(int i)
	{
		n1=i;
	}
	void print()
	{
		cout<<"Value of n1 is:--"<<n1<<endl;
		cout<<"Address of n1:--"<<&n1;
	}
};
int main()
{
	Sample s1(100);
	Sample *ptr;
	ptr=&s1;
	ptr->print();
}
