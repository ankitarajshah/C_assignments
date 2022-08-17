#include<stdio.h>
int add(int *x,int *y)
{
	int sum;
	sum= *x+*y;
	return sum;
}
void main()
{
	int a,b,sum=0;
	int *x,*y;
	printf("Enter the value for A and B:");
	scanf("%d%d",&a,&b);
//	x=&a;
//	y=&b;
	sum= add(&a,&b);
	printf("%d",sum);
}