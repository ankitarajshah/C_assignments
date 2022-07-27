#include<stdio.h>
void main()
{
	int marks[5];
	int i;
	for(i=0;i<5;i++)//accept array by user
	{
		printf("Enter Element [%d] =",i);
		scanf("\n%d",&marks[i]);
	}
	for(i=0;i<5;i++)//display array 
	{
		printf("\n Element [%d] = %d",i,marks[i]);
		
	}
	printf("\n----:Display address:---");
	for(i=0;i<5;i++)//display address
	{
		printf("\n Element [%d] = %d",i,(marks+i));
		
	}
}