//Standard Template Library

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1(1,10);
	cout<<"Element at index 0:--"<<v1.at(0)<<endl;
	v1.push_back(100);
	v1.push_back(29);
	v1.push_back(88);
	v1.push_back(99);
	v1.pop_back();
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<",";
	}
	cout<<*(v1.begin())<<endl;
	cout<<*(v1.begin()+2)<<endl;
	cout<<*(v1.end())<<endl;
	cout<<*(v1.end()-1)<<endl;
	cout<<v1.front()<<endl;
	cout<<(v1.back());
	
}
