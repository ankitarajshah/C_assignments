#include<stdio.h>
void main()
{
	int i,j,m1[3][3],m2[3][3],m3[3][3];

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
		printf("\nEnter the Matrix1 elements [%d][%d]:",i,j);
		scanf("%d",&m1[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
		printf("\nEnter the Matrix2 elements [%d][%d]:",i,j);
		scanf("%d",&m2[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		m3[i][j]=m1[i][j]+m2[i][j];
		printf("\nAddition of Matrix elements [%d][%d]=%d",i,j,m3[i][j]);

		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		m3[i][j]=m1[i][j]-m2[i][j];
		printf("\nSubtraction of Matrix elements [%d][%d]=%d",i,j,m3[i][j]);

		}
		printf("\n");
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		m3[i][j]=m1[i][j]*m2[i][j];
		printf("\nMultiplication of Matrix elements [%d][%d]=%d",i,j,m3[i][j]);

		}
		printf("\n");
	}
}
	