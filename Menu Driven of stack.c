#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void push(int);
void pop();
void display();
int top=-1;
int stack[MAX];
int main()

{
	int ch,b;
	do
	{
		printf("Press\n1 PUSH\n2 POP\n3 DISPLAY\n4 EXIT\nEnter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value:\n");
				scanf("%d",&b);
				push(b);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:printf("Invalid Choice\n");
		}
	}while(ch!=4);
	return 0;
}
void push(int b)
{
	if(top==MAX-1)
	{
		printf("Overflow\n");
	}
	else
	{
		top=top+1;
		stack[top]=b;
	}
}
void pop()
{
	int b;
	if(top==-1)
	{
		printf("Underflow\n");
	}
	else
	{
		b=stack[top];
		printf("Popped value is %d",b);
		top--;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Empty stack\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("%d\n",stack[i]);
		}
	}
}
