#include<stdio.h>
int eveodd(int n)
{
	if(n%2 == 0?printf("\nNumber %d is Even",n):printf("\nNumber %d is Odd",n));
}
void main()
{
	int n;
	printf("\nEnter number to find Even or Odd:\n");
	scanf("%d",&n);
	printf("\nValue of n=%d",n);
	eveodd(n);
}