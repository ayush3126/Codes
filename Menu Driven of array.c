#include <stdio.h>
int main()
{
	int a[10],n,i,ch,b,pos,f;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	do
	{
		printf("Press\n1 Insertion\n2 Deletion\n3 Replace\n4 Search\n5 Display\n6 Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the number to be inserted:\n");
				scanf("%d",&b);
				printf("Enter the position to be inserted:\n");
				scanf("%d",&pos);
				for(i=n;i>=pos;i--)
				{
					a[i]=a[i-1];
				}
				a[pos-1]=b;
				n++;
				break;
			case 2:
				printf("Enter the position of the number to be deleted:\n");
				scanf("%d",&pos);
				for(i=pos-1;i<n-1;i++)
				{
					a[i]=a[i+1];
				}
				a[n-1]=0;
				n--;
				break;
			case 3:
				printf("Enter the position of the number to be replaced:\n");
				scanf("%d",&pos);
				printf("Enter the number:\n");
				scanf("%d",&b);
				a[pos-1]=b;
				break;
			case 4:
				printf("Enter the number to be searched:\n");
				scanf("%d",&b);
				for(i=0;i<n;i++)
				{
					if(a[i]==0)
					{
						f=i;
						break;
					}
				}
				if(f==-1)
				{
					printf("Element not found\n");
				}
				else
				{
					printf("%d is found at %d\n",b,f);
				}
				break;
			case 5:
				printf("The modified array is:\n");
				for(i=0;i<n;i++)
				{
					printf("%d\n",a[i]);
				}
				break;
			case 6:
				break;
			default:printf("Invalid choice\n");
		}
	}while(ch!=6);
	return 1;
}
