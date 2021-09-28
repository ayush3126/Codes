#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void cenqueue(int);
void cdelqueue();
void cdisplay();
int front=-1,rear=-1,cqueue[MAX];
int main()
{
	int ch,b;
	do
	{
		printf("Press\n1 Insert\n2 Delete\n3 Display\n4 Exit\nEnter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value:\n");
				scanf("%d",&b);
				cenqueue(b);
				break;
			case 2:
				cdelqueue();
				break;
			case 3:
				cdisplay();
				break;
			case 4:
				break;
			default:printf("Invalid Choice\n");
		}
	}while(ch!=4);
	return 0;
}
void cenqueue(int b)
{
	if(rear==MAX-1)
	{
		printf("Overflow\n");
	}
	else
	{
		if(front==-1 && rear==-1)
		{
			front=rear=0;
		}
		else
		{
			rear=(rear+1)%MAX;
		}
		cqueue[rear]=b;
	}
}
void cdelqueue()
{
	int b;
	if(front==-1)
	{
		printf("Undderflow\n");
	}
	else
	{
		b=cqueue[front];
		printf("Deleted value is %d",b);
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front=(front+1)%MAX;
		}
	}
}
void cdisplay()
{
	int i;
	if(front==-1)
	{
		printf("Empty queue\n");
		return;
	}
	else
	{
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d\n",cqueue[i]);
			}
		}
		else
		{
			for(i=front;i<MAX;i++)
			{
				printf("%d\n",cqueue[i]);
			}
			for(i=0;i<=rear;i++)
			{
				printf("%d",cqueue[i]);
			}
		}
	}
}
