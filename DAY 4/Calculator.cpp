//Calculator :-- implemented using the switch statement
#include<iostream>
using namespace std;
int main()
{
	char op;
	int a;
	int b;
	int c;
	cout<<"enter operator";
	cin>>op;
	cout<<"Enter value of a";
	cin>>a;
	cout<<"Enter value of b";
	cin>>b;
	switch(op)
	{
		case '+':
			c=a+b;
			cout<<"the addition is"<<c<<endl;
			break;
		case '-':
			c=a-b;
			cout<<"the subtraction is"<<c<<endl;
		default:
			cout<<"out of loop";
	}
	
	}

