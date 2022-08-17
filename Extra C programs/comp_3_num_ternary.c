#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("Enter values for a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	max = a > b ? (a > c ?  :c) : (b > c ? b : c);
	printf("Maximum number %d ",max);
	
}