#include<stdio.h>
int Sq(int n)
{
	return n*n;
}
void main()
{
	int n;
	printf("Enter number to find square:");
	scanf("%d",&n);
	printf("\nValue of n=%d",n);
	printf("\nSquare of %d = %d",n,Sq(n));
}