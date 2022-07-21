#include<stdio.h>
int maxi (int a[],int max)
{
	int i;
 	max = a[0];
	//printf("%d",max);
	for(i=0;i<4;i++)
	{
		if(a[i]>max)
		{
			max= a[i];
		}	
	}
	return max;	
}
void main()
{
	int a[5],i,max;

		for(i=0;i<4;i++)
		{
			printf("Enter the array elements [%d] :",i);
			scanf("%d",&a[i]);
		}
printf("Maximum array element is %d",maxi(a,max));
}