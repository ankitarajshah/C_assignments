#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp = a,
	a = b;
	b = temp;
	printf("\nIn function After Swap A =%d and B= %d",a,b);
	
}
void main()
{
	int a=72,b=21;
	printf("\nBefore Swap A =%d and B= %d",a,b);
	swap(a,b);
	
	//printf("\nIn main function After Swap A=%d and B= %d",a,b);     value of and b will be picked from main function
}