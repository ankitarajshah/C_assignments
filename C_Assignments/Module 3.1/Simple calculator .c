#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter value of a and b\n");
	scanf("%d %d",&a,&b);
	printf("Addition is %d\n",a+b);
	printf("Subtraction is %d\n",a-b);
	printf("Multiplication is %d\n",a*b);
	printf("Division is %.2f\n",a/(float)b);
	printf("Modulo is %d\n",a%b);
}