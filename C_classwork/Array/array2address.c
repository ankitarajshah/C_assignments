#include<stdio.h>
void main()
{
	int marks[10]={0,1,2,3,4,5,6,7,8,9};//array initialization
	int i;
	for(i=0;i<10;i++)
	{
		printf("\n%d", marks+i);// address of array base index marks+i
	
		//printf("\nElement [%d]=%d",i,marks[i]);//display of array
	}
}