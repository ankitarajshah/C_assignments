#include<stdio.h>
void add();			//function declaration ---> after main function

void display()		//user defined function----->declaration not required 
{
	printf("This is user defined function.");
}
void main()
{
	display();	//function calling
	add();
}
void add()
{
	printf("\nThis is addition.");
}