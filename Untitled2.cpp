#include<iostream>
using namespace std;

class shape
{

	virtual void area()=0;
};

class square: public shape
{
	public:
	int length;
	void area()
	{
		cout<<length*length;
	}
};

int main()
{
	square sq;
	sq.length=5;
	sq.area();
	return 0;
}
