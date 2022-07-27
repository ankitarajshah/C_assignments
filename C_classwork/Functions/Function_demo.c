#include<stdio.h>
void func1()
{
	printf("This is function 1.");
}

void func2(int a, int b)
{
	printf("\nThis is function 2 value of a = %d ,b = %d",a,b);
}

int add(int a,int b)
{
	printf("\nAddition of a = %d and b = %d ",a,b);
	return a+b;
}
void main()
{
	int a=10,b=20;	
	func1();
	func2(a,b);
	printf("\nIn main function value returned =%d",add(a,b));
}