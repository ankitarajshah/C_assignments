#include<stdio.h>
void main()
{
	int array1[5],array2[5],array3[5],i;
	
	printf("\nEnter Array1 Elements :\n");//accept array
	for(i=0;i<5;i++)
		{
			printf("Enter Element [%d] :",i);
			scanf("%d",&array1[i]);
		 }  	
		 
	printf("\n Array1 Elements are :");// display array
	for(i=0;i<5;i++)
		{
			printf("\nElement [%d] = %d\n",i,array1[i]);		
		}

	printf("\n\nEnter Array2 Elements : \n");
	for(i=0;i<5;i++)
		{
			printf("Enter Element [%d] :",i);
			scanf("%d",&array2[i]);
		 }  	
		 
	printf("\n Array2 Elements are : \n");// display array
	for(i=0;i<5;i++)
		{
			printf("Element [%d] = %d\n",i,array2[i]);		
		}
	
	printf("\n Addition of two Array Elements are : \n");// add array
	for(i=0;i<5;i++)
		{
			array3[i]=array1[i]+array2[i];
			printf("Element [%d] = %d\n",i,array3[i]);		
		}
		

}