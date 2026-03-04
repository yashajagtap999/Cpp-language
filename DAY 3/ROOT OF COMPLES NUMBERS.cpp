//TO FIND THE ROOT OF COMPLEX NUMBER
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int d;
	cout<<"enter the value";
	cin>>a;
	cout<<"enter the value";
	cin>>b;
	cout<<"enter the value";
	cin>>c;
d=b*b-4*a*c;
if(d>0)
{
	cout<<"the roots are real and distinct";
}
else if(d=0)
{
	cout<<"the roota are real and equal";
}
else
{
	cout<<"the roots are imaginary and distinct ";
}
}

