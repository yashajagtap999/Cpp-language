//ELSE-IF :-- USED TO APPLY MULTIPLE CONDITIONS ON A DATA
#include<iostream>
using namespace std;
int main()
{
	int n1;
	cout<<"ENTER N1";
	cin>>n1;
	if(n1>0)
	{
		cout<<"n1 is positive";
	}
	else if(n1=0)
	{
		cout<<"n1 is zero";
	}
	else
	{
		cout<<"n1 is negitive\n";
	}
	cout<<"out of loop";
}

