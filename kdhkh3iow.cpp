#include<iostream>
using namespace std;

class line
{
	public:
		int getlength();
		line(int len);
		line(int &obj);
		~line();
		
		private:
			int *ptr;
		
};

line::line(int len)
{
	cout<<"normal cinstructor";
	ptr=new int;
	*ptr=len;
}

line::line(int &obj)
{
	cout<<"copy constructor";
	ptr=new int;
	*ptr=obj;
}

line::~line()
{
	cout<<"destructor";
	delete ptr;
}

int line::getlength(){
	return *ptr;
}
void display(line obj)
{
	cout<<"length of line"<<obj.getlength();
}

int main()
{
	
	line(10);
	return 0;
}
