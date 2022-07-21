#include<stdio.h>
void main()

{
	int a[4],i,max=0,min=0;
	printf("Enter number:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<4;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
		else
		{
			min = a[i];
		}
	}
	printf("Maximum number is %d",max);
	printf("Minimum number is %d",min);
		
}