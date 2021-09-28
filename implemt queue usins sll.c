#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;	
};
struct node *start=NULL;
void insertqueue();
int deletequeue();
void display();
int main()
{
	int x,p;
	printf("Menu\n1 Insert the elements in stack\n2 Delete from stack\n3 Display\n4 Exit");
	printf("\n make choice:\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:insertqueue();
		       break;
		case 2:p=deletequeue();
	           printf("deleted element is :%d",p);
			   break;
		case 3:display();
			   break;
		case 4:break;	
		default:printf("Invalid choice\n");  	
	}
}
void insertqueue()
{
	struct node*newnode;
	int num;
	printf("Enter the data:\n");
	scanf("%d",&num);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	if(start==NULL)
	{
		newnode->next=NULL;
	}
	else
	{
		newnode->next=start;
		start=newnode;
	}
}
int deletequeue()
{
	int x=-9999;
	struct node*ptr,*preptr;
	if(start==NULL)
	{
		printf("underflow\n");
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		preptr->next=NULL;
		x=ptr->data;
		free(ptr);
	}
	return x;
}
void display()
{
	struct node*ptr;
	ptr=start;
	if(ptr==NULL)
	{
		printf("Elements are:\n");
		while(ptr!=NULL)
		{
			printf("\t%d",ptr->data);
			ptr=ptr->next;
		}
	}
}
