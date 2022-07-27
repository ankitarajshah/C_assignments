#include<stdio.h>
void main()
{
	int i,n,a1[100],a2[100],a3[100],dup,j;
	printf("Enter number of elements in array1:\n");
	scanf("%d",&n);
	printf("Enter %d number of elements in array1:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter array1 element [%d]=",i);
		scanf("\n%d",&a1[i]);
	}
	printf("Value stored in array1 elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("\nElements in [%d] = %d",i,a1[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		a2[i]=a1[i];
		a3[i]=0;	
	}
	printf("\nValues copied in array2 elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("\nElements in [%d] = %d",i,a2[i]);
	}
	printf("\n\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
			if(a1[i] == a2[j])
			{
				a3[j] = dup;
				dup++;
			}
		}
	}
	printf("%d",dup);
}