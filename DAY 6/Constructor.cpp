
#include<iostream>
using namespace std;
class sample
{
	int x;
	int y;
	public:
		sample()
		{
			cout<<"constructor"<<endl;
		}
		void getd()
		{
			cout<<"enter x :"<<endl;
			cin>>x;
			cout<<"enter y:"<<endl;
			cin>>y;
		}
};
int main()
{
	sample s1;
	s1.getd();
}

