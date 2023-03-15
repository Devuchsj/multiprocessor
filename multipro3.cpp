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
			cout<<n<<endl;
		
		}
			void truck(int n,int m)
		{
			cout<<n+m<<endl;
		
		}
		    void truck(int n,int m,int q)
		    {
		    		cout<<n+m+q<<endl;
			}
};

int main()
{
	Truck t1;
	t1.truck();
	t1.truck(20);
	t1.truck(20,20);
	t1.truck(20,20,20);
	return 0;
}
