#include<stdio.h>
void main()
{
	int n1,n2;
	printf("Enter value of n1 and n2 ");
	scanf("%d %d",&n1, &n2);
//	printf("Enter value of n2=");
//	scanf("%d",&n2);
	printf("Additon is %d\n ",n1+n2);
	printf("Subtraction is %d\n",n1-n2);
	printf("Multiplication is %d\n",n1*n2);
	printf("Division is %.2f",n1/(float)n2);//typecasting and .2 for precision control
}