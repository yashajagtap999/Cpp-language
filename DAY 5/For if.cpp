//for loop: A for loop in C++ is used to repeat a block of code a fixed number of times.if statement: An if statement in C++ is used to execute a block of code only when a specified condition is true.
#include<iostream>
using namespace std;
int main()
{
	int i=0;
	for(i=0;i<=200;i++)
	{
		if(i%2==0)
		cout<<i<<"\t";
	}
	
	cout<<"\n"<<  " Odd number     "<<"\n";
	for(i=1;i<=200;i++)
	{
		if(i%3==0)
		cout<<i<<"\t";
	}
}

