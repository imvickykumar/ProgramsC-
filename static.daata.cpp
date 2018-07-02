#include<iostream>
using namespace std;

class student
{
	static int count;
	int roll;
	
	public:
		void getdata(int a)
		{
			roll=a;
			count=count+2;
		}
		
		void show()
		{
			cout<<"\nstatic count:\t"<<count;
		}
};
int student::count;

int main()
{
	student s1,s2,s3;
	s1.getdata(0);
	s1.getdata(0);
	s1.getdata(0);
	
	s1.show();
	s1.show();
	s1.show();
	return 0;
}
