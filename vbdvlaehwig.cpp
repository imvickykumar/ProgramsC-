#include<iostream>
using namespace std;

class base
{
	public:
		int b;
		void show()
		{
			cout<<"b="<<b;
		}
};

class derived:public base
{
	public:
		int d;
		void show()
		{
			cout<<"b"<<b;
			cout<<"d:"<<d;
		}
		
};

int main()
{
	base *ptr;
	base obj;
	ptr=&obj;
	ptr->b=100;
	cout<<"ptr to base obj";
	ptr->show();
	derived obj2;
	ptr=&obj2;
	ptr->b=200;
	ptr->show();
	
	
}
