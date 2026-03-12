//Class is an passive entity and cannot be executed til object is created.
#include<iostream>
using namespace std;
class Student
{
	string name;
	int roll;
	public:
		void getdata()
		{
			cout<<"enter name";
			cin>>name;
			cout<<"enter roll";
			cin>>roll;
		}
		void putdata()
		{
			cout<<name;
			cout<<roll;
		}};
int main()
{
	Student s1;
	s1.getdata();
	s1.putdata();
	
}

