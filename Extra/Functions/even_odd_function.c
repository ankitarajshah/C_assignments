#include<stdio.h>

void evenodd(int num)
{
	if(num%2 == 0)	
	{
		printf("Even");
	}
	else 
	{
		printf("Odd");
	}
}

void main()
{
	int num;
	printf("Enter number = ");
	scanf("%d",&num);
	evenodd(num);
}