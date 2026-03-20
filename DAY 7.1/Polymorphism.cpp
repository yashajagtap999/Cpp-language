//Polymorphism :-- A single object that can perform multiple task.

#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"Addition is"<<a+b;
	
}
void add(float a,float b)
{
	cout<<"Addition is"<<a+b;
}
int main()
{
	add(10,90);
	add(10.1f,90.1f);
}
