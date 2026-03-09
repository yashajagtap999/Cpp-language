//A do...while loop in C++ is a control structure that executes a block of code at least once, and then repeats the execution as long as the condition is true
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	do{
		cout<<a<<"\t";
		a++;
	}
	while(a%2==0);
}

