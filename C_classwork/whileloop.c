#include<stdio.h>
void main()
{
	int i=0;
	while(i<=1000)
	{
		printf("\n%d ",i);
		i++;
		if(i>3)
		{
			break;
		}
		
	}
	printf("Out of loop.");
}