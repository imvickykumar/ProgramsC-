#define SIZE 10
#include<stdio.h>
#include<string.h>
#include<conio.h>
int i,c;


//stack implementation
struct stack
{
int top;
int A[SIZE];
};
struct stack*s;


void push(struct stack*s1)
{if(s1->top==(SIZE-1))
printf("Stack is full\n");
else
{scanf("%d",&s1->A[++s1->top]);
 printf("Element is added\n");
}    }
int isEmpty(struct stack*s1)
{
    if(s1->top==-1)
    return 1;
    else
	return 2;
}
void pop(struct stack*s1)
{
    if(isEmpty(s1)==1)
    printf("Stack is empty\n");
    else
    {s1->top--;
    printf("Element is deleted\n");}
}
int main()
{s->top=-1;

i=0;
while(i==0)
{
printf("Enter 1 for adding an element\nEnter 2 for deleting element\nEnter 3 for exit\n");
scanf("%d",&c);
switch(c)
{

case 1:
    push(s);
    break;
case 2:
    pop(s);
    break;
case 3:
    i=1;
    break;
default:
    printf("Wrong choice please enter again");
    }}
    
    return 0;
}


