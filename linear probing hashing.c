#include <stdio.h>
#define MAX 5
int main()
{
	int a[MAX],hash[MAX],d,i,t,k;
	for(i=0;i<MAX;i++)
	{
		hash[i]=-9999;
	}
	printf("Enter the values:\n");
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<MAX;i++)
	{
		d=a[i]%5;
		k=d;
		while(k<MAX)
		{
			if(hash[k]==-9999)
			{
				hash[k]=a[i];
				break;
			}
			k=(k+1)%MAX;
		}
	}
	for(i=0;i<MAX;i++)
	{
		printf("%d\t",hash[i]);
	}
	return 0;
}
