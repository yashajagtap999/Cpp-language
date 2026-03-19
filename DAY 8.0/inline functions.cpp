//inline functions :-- It is a single line functions
#include<iostream>
using namespace std;
int main()
{
	int a;
	a=cube(3);
	a=cube(5);
	inline int cube (int a){return a*a*a};
}
