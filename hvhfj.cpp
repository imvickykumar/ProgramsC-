#include<iostream>
using namespace std;

class student
{
	protected:
		int roll;
		
		public:
			void getnum(int a){ roll=a;}
			void putnum(){cout<<"\nroll"<<roll;}
			
};

class test:virtual public student
{
	protected:
		float part1,part2;
		
		public:
			void getmarks(float x,float y){part1=x; part2=y;}
			void putmarks(){cout<<"\npart1"<<part1; cout<<"\npart2"<<part2;}
};

class sports:public virtual student
{
	protected:
		float score;
		public:
			void getscore(float s){score=s; }
			void putscore(){cout<<"\nscore"<<score;
			}
	
};

class result:public test,public sports
{
	float total;
	public:
		void display(){total=part1+part2+score;
		putnum();
		putmarks();
		putscore();
		cout<<"\ntotal:"<<total;
		}
};

int main()
{
	result r;
	r.getnum(100);
	r.getmarks(30.5,40.5);
	r.getscore(7.0);
	r.display();
	return 0;
}
