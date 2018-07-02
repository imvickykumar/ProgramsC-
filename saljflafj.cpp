#include<iostream>
using namespace std;

class student
{
	int roll;
	public:
		void fun()
		{
			cout<<"roll please:\t";
			cin>>roll;
		}
		
		void sum(student s)
		{
			int newroll=s.roll*10;
			cout<<"\nnew roll no. assigned:\t"<<newroll;
		}
};

int main()
{
	student s1,s2;
	s1.fun();
	s2.fun();
	
	cout<<"\n demo";
	s1.sum(s1);
	s1.sum(s2);
}
