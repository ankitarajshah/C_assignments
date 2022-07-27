#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	if(n>0)
		{
			printf("Number %d is positive",n);
		}
	else
		{
		if(n<0)
		{
			printf("Number %d is negative",n);	
		}
		else
		{
			printf("Number %d is zero",n);	
		}
	}
}