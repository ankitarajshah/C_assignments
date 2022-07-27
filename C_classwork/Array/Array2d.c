#include<stdio.h>
void main()
{
	int TwoD[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Elements [%d][%d] =",i,j);
			scanf("%d",&TwoD[i][j]);
		}
	}
	printf("Display Elements: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nElements address [%d][%d] =%d \t %d",i,j,(TwoD+i),(TwoD+j));
			printf("\nElements are [%d][%d] =%d",i,j,TwoD[i][j]);
		}
	}
}