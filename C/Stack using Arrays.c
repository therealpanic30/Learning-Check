#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
int top=-1;
int s[5];
void push(int x)
{
	if (top == SIZE-1)
	{
		printf("\n Overflow");
	}
	else
	{
		top=top+1;
		s[top]=x;
	}
}
int pop()
{
	if(top==-1)
	{
		printf("\nUnderFlow");
		return -127;
	}
	else
	{
		return s[top--];
	}
}

int peek()
{
	if(top==-1)
	{
		printf("\nStack is Empty");
		return -127;
	}
	else
	{
		return s[top];
	}
}

void display()
{
	int a;
	if (top==-1)
	{
		printf("\nStack is Empty");
	}
	else
	{
		for(a=top;a>=0;a--)
		{
			printf("%d",s[a]);
		}
	}
}

int main(int argc,char*argv[])
{
	int choice,n;
	do
	{
		printf("\n0.Exit\n1.Push\n2.Pop\n3.Peek\n4.Display\n");
		printf("\nEnter your Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0: 
				exit(0);
			case 1: printf("\n enter item to be inserted into the stack:");
				scanf("%d",&n);
				push(n);
				printf("\n%d has been pushed into the stack",n);
				break;
			case 2:
				n=pop();
				if(n!=-127)
				{
					printf("\n%d has been popped from the stack",n);
				}
				break;
			case 3:
				printf("\n%d",peek());
				break;
			case 4:
				display();
				break;
			default:
				printf("\nEnter a valid choice!!");	
		}
	}while(1);
	return 0;
}













