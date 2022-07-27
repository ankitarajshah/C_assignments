#include<stdio.h>
void main()
{
	int i;
	printf("Start the loop.");
	
	for(i=0;i<=10;i++)
	{
		printf("\n%d",i);
		if(i==10)
		{
			printf("Stop the loop.");
		}
	}
	printf("Out of loop.");
}