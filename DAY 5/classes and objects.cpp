//class is an passive intity and object is an active entity.
#include<iostream>
	using namespace std;
	class cars
	{
		int price;
		string name;
		public:
			void get()
			{
				cout<<"enter name";
				cin>>name;
				cout<<"enter price";
				cin>>price;
			}
			void put()
			{
				cout<<name;
				cout<<price;
			}};
			
		int main()
		{
			cars c1;
			c1.get();
			c1.put();
		}
		


