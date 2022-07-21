#include<stdio.h>
void main()
{
	int i,n,t,j;
	printf("Enter number for table :");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=10;i++)
		{
			t=j*i;
			printf("\n%d X %d =%d",j,i,t);
		}	
	}
	printf("\n");
    
}
