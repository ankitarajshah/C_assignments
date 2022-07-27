#include<stdio.h>

void func1()
{
	
	printf("\nThis is function 1.");
}

void func2()
{
	func1();
	printf("\nThis is function 2.");
}

void main()
{
	func1();
	func2();
	
}