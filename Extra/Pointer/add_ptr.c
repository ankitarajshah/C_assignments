#include<stdio.h>
void main()
{
	int *a,*b;
	int x,y,sum=0;
	printf("Enter the value for A and B:");
	scanf("%d%d",&x,&y);
	a=&x;
	b=&y;
	sum = *a + *b;
	printf("Addition of %d+%d=%d",*a,*b,sum);
}