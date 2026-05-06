//Pointer--It is a derived datatype used to store the memory address and used to access values from perticularmemory adddress
#include<iostream>
using namespace std;
int main()
{
	int a=100;
	int *ptr;
	ptr=&a;
	cout<<"Value of A:--"<<a<<endl;
	cout<<"Address of A:--"<<&a<<endl;
	cout<<"Value of a:--"<<*ptr;
	*ptr=10000;
	cout<<*ptr;
}
