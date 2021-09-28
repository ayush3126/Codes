#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void enqueue(int);
void delqueue();
void display();
int front=-1,rear=-1,queue[MAX];
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
				enqueue(b);
				break;
			case 2:
				delqueue();
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
void enqueue(int b)
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
			rear=rear+1;
		}
		queue[rear]=b;
	}
}
void delqueue()
{
	int b;
	if(front==-1 || front>rear)
	{
		printf("Undderflow\n");
	}
	else
	{
		b=queue[front];
		printf("Deleted value is %d",b);
		front++;
	}
}
void display()
{
	int i;
	if(front==rear==-1)
	{
		printf("Empty queue\n");
		return;
	}
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
}
