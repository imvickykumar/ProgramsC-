#include<stdio.h>
#include<conio.h>
#define size 5

int A[size];
int top=-1;
int i;
void push(int data)
{
	if (top==size-1)
	{
		printf("stack is full");
	}
	else
	{
		top=top+1;
		A[top]=data;
	}
}

int pop()
{
	if(top==-1){
		printf("stack is empty");
		return 0;
	}
	else
	
	{
		int item;
		item=A[top];
		printf("poped item is %d\n",item);
		top=top-1;
		return 0;
		
	}
}

void isempty()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("stack is not empty\n");
		
	}
}

void print()
{
	printf("stack content:");
	
	for(i=0;i<=top;i++)
	{
		printf("%d\t", A[i]);
	}
	printf("\n");
	
}

int main()
{
	push(20); print();
	push(30); print();
	pop(); print();
	push(40); print();
	isempty();
	push(50); print();
	pop(); print();
	isempty();
	return 0;
}


