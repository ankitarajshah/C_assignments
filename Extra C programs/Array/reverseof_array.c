#include<stdio.h>
void main()
{
	int i,n,a[100];
	printf("Enter number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter %d number of elements in array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter array element [%d]=",i);
		scanf("\n%d",&a[i]);
	}
	printf("Value stored in array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("\nElements in [%d] = %d",i,a[i]);
	}
	
	for(i=n-1;i>0;i--)
	{
		printf("\nValue in array elements after reversed [%d] = %d",i,a[i]);
	}
	printf("\n\n");
}