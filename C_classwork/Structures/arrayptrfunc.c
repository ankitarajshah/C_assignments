#include<stdio.h>
void display(int*p)// passing base address 
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d \n",(p+i)); //address display
		printf("%u \n",*(p+i)); //value display
	}
}
void main()
{
	int arr[5]={10,24,20,23,56};
	display(arr);
}