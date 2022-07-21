#include<stdio.h>

void main()
{
	int n,i,sum1=0,sum2=0;
	int odd = 0;
	int even = 0;
	
	for(i=0;i<10;i++)
	{	
		printf("\n\nEnter integer:");
		scanf("\n %d",&n);
		(n % 2 == 0) ? printf("%d is Even number",n):printf("%d is Odd number",n);
			if(n % 2 == 0)
			{
			even++;	
			sum1=sum1+n;
			}
			else
			{
			odd++;
			sum2=sum2+n;
			}	
		}		
printf("\nCount of Even  is %d",even);
printf("\nSum1 of even is %d",sum1);
printf("\n\nCount of Odd is %d",odd);
printf("\nSum2 of odd is %d",sum2);
}