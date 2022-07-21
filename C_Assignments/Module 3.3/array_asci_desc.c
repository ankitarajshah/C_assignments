#include<stdio.h>
void main()
{
	int a[100],i,j,n,temp;
	printf("Enter the array size = ");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
	scanf("%d ",&a[i]);
	//printf("\nArray elements are %d",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			
		}
	}
	printf("\nAscending numbers:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			
		}
	}
	printf("\nDescending numbers:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}