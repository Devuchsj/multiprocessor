#include<iostream>
#include<string.h>

using namespace std;

class Truck
{
	public :
		void truck()
		{
			cout<<"empty truck is running"<<endl;
		}
		void truck(int n)
		{
			cout<<"truck is running with"<<n<<"person"<<endl;
		
		}
			void truck(int n,float m)
		{
			cout<<"truck is running with"<<n<<"person"<<m<<"goods"<<endl;
		
		}
		
};

int main()
{
	truck t1;
	t1.truck();
	t1.truck(20);
	t1.truck(20,20.0);
	return 0;
}
