#include<stdio.h>

void main()

{
 	int n,fact=1,i;
 	printf("Enter number to find factorial:");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	fact=fact*i;
 	printf("Factorial of number %d is %d:",n,fact);
}