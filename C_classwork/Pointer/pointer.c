#include<stdio.h>
void main()
{
	int a=10;
	int *ptr;// pointer variable declaration.
	printf("Without pointer address of A =%u",&a);
	ptr=&a; //*(&a)
	printf("\nThrough pointer address of A = %u",ptr);
	printf("\nWithout pointer Value of A= %d",a);
	printf("\nThrough pointer Value of A= %d",*ptr); // *ptr = value		ptr = address

}