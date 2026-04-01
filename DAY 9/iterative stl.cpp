//iterative

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1(1,10);
	v1.push_back(100);
	v1.push_back(200);
	v1.push_back(300);
	v1.push_back(400);
	
	vector<int> ::iterator t1;
	for(t1=v1.begin();t1!=v1.end();t1++)
	{
		cout<<*t1<<endl;
	}
	cout<<v1.front()<<endl;
	cout<<v1.back()<<endl;
	v1.pop_back();
	cout<<*(v1.end())<<endl;
	cout<<v1.at(1);
}
