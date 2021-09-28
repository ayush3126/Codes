#include <stdio.h>
int main()
{
	int a[100],i,n,b,f=0,mid,flag,l=99;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:\n");
	scanf("%d",&b);
	while(f<=l && flag!=0)
	{
		mid=(f+1)/2;
		if(b==a[mid])
		{
			flag=0;
		}
		else if(b>a[mid])
		{
			f=mid+1;
		}
		else if(b<a[mid])
		{
			l=mid-1;
		}
	}
	if(flag==0)
	printf("%d is found at %d",b,(mid+1));
	else
	printf("Element not found");
	return 0;
}
