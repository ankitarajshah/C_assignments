#include<stdio.h>
int swap(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("\nIn function After Swap A =%d and B= %d",a,b);
}
void main()
{
	int a,b;
	printf("Enter values of A and B :\n");
	scanf("%d%d",&a,&b);
	printf("\nValue before swap A =%d and B=%d\n",a,b);
	swap(a,b);
	
}