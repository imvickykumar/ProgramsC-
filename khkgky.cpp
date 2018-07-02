#include<iostream>
using namespace std;
int main()
{

int a = 10;
char b = 'x';
 
void *p = &a;  // void pointer holds address of int 'a'


cout<<*(int*)p;
return 0;
}
