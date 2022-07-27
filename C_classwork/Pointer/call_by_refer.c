#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("\nIn function Ater swap A= %d and B= %d",*a,*b);

}
void main()

{
	int a=56,b=25;
	printf("\nBefore swap A= %d and B= %d",a,b);
	swap(&a,&b);
	
	printf("\nIn MAIN function Ater swap A= %d and B= %d",*a,*b);	
}