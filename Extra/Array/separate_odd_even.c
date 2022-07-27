#include<stdio.h>
void main()
{
	int i,n,a1[10],a2[10],a3[10],j=0,k=0;
	printf("Enter number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter %d number of elements in array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter array element [%d]=",i);
		scanf("\n%d",&a1[i]);
	}
	printf("Value stored in array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("\nElements in [%d] = %d",i,a1[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a1[i]%2 ==0)
		{
			a2[j]=a1[i];
			j++;
		}
		else
		{
			a3[k]=a1[i];
			k++;
		}
	}
	
	printf("\nThe Even elements are :\n");
	for(i=0;i<j;i++)
	{
		printf("\n%d",a2[i]);
	}
	printf("\nThe Odd Elements are :\n");
	for(i=0;i<k;i++)
	{
		printf("\n%d",a3[i]);
	}
}