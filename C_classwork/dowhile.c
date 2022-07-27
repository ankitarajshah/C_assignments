#include<stdio.h>
void main()
{
	int i;
	do
	{
		printf("\n%d",i);
		i++;
		if(i>3)
		{
			break;
		}
		
	}while(i<=1000);
	printf("Out of loop.");
}