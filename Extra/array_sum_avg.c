#include<stdio.h>
void main()
{
	int a[5],i,sum=0;
	float avg=0;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter array elements[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		sum=sum+a[i];
		avg = sum/5;
		
	}
	printf("\nSum is : %d",sum);	
	printf("\nAverage is : %.2f",avg);
}