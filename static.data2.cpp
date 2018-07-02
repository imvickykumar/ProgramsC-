#include <iostream>
using namespace std;

class Demo
{
	private:	
		static int X;

	public:
		static void fun()
		{
			cout <<"Value of X: " << X << endl;
		}
};

//defining
int Demo :: X ;


int main()
{
	Demo X,y,z;

	X.fun();
	y.fun();	
	return 0;
}
