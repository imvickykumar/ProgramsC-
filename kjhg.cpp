#include<iostream>
using namespace std;
class test
{
	int code;
	static int count;
	public:
		void setcode()
		{
			code=count;
		}
		void show()
		{
			cout<<"obj number:"<<code<<"\n";
		}
		static void showcount()
		{
			cout<<"count:"<<count<<"\n";
		}
	  
};

int test::count;


int main()
{
	test t1,t2,t3;
	t1.setcode();
	t2.setcode();
	t3.setcode();
	
	
/*	t1.showcount();
	t2.showcount();
	t3.showcount();*/
	t1.show();
	t2.show();
	t3.show();


	return 0;
}
