#include<stdio.h>
void main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		//printf("\n%d",i);
		sum=sum+i;
		printf("\n%d+%d",sum,i);

	}
	printf("sum of loop= %d",sum);
}