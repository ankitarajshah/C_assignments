#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
void main()
{
	int a,b;
	printf("Enter values of A and B :");
	scanf("%d%d",&a,&b);
	printf("\nValue of A =%d and B=%d",a,b);
	printf("\nSum of A = %d and B = %d is %d",a,b,add(a,b));
}