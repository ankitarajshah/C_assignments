#include<stdio.h>
void main()
{
	int i,j,t,k;
	printf("\nEnter table num =");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		printf("Table of %d\n",i);
		for(j=1;j<=10;j++)
		{
		t = i * j;
		printf("\n%d X %d = %d\n",i,j,t);
		
		}
	}
	printf("\n");	
}