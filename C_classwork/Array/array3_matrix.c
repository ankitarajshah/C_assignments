#include<stdio.h>
void main()
{
	int TwoD[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Elements [%d][%d] =",i,j);
			scanf("%d",&TwoD[i][j]);
		}
	}
	printf("Display Elements: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Elements are [%d][%d] = %d",i,j,TwoD[i][j]);
		}
		printf("\n");
	}
}