#include<stdio.h>
void main()
{
	int i,n,fact=1;
	printf("Enter number for factorial=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;	
	}
	printf("\nFactorial of number %d is %d",n,fact);
}