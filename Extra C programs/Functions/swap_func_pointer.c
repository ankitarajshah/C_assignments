#include<stdio.h>

void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;	
}

void main()
{
	int n1,n2;
	printf("Enter 1st number = ");
	scanf("%d",&n1);
	printf("Enter 2nd number = ");
	scanf("%d",&n2);
	printf("\nBefore Swap numbers are n1 = %d and n2 = %d",n1,n2);
	swap(&n1,&n2);
	printf("\nAfter Swap numbers are n1 = %d and n2 = %d",n1,n2);
}