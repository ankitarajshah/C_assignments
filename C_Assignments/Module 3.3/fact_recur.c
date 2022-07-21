#include<stdio.h>
int facto(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact =fact*i;
	}
	return fact;
}
void main()
{
	int n,i,fact=1;
	printf("Enter number for factorial:");
	scanf("\n%d",&n);
//	facto(n);
	printf("Factorial of number %d = %d",n,facto(n));
}