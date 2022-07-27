#include<stdio.h>
void add()  //category1 no returntype,no parameter
{
	int a,b;
	printf("Enter value for a and b:");
	scanf("\n%d %d",&a,&b);
	printf("Addition = %d ",a+b);
}
void main()
{
	add();	
}