#include<stdio.h>
void main()
{
	int a[5]={25,53,88,12,26};
	int i;
	int *ptr;
	ptr=a;
	printf("\n------Value of Array elements without pointer------\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n------Address of Array elements without pointer-----\n");
	for(i=0;i<5;i++)
	{
		printf("%u\t",a+i);
	}
	printf("\n------Value of Array elements with pointer------\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	printf("\n------Address of Array elements with pointer-----\n");
	for(i=0;i<5;i++)
	{
		printf("%u\t",(ptr+i));
	}
	
	
}