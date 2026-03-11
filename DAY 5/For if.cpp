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
