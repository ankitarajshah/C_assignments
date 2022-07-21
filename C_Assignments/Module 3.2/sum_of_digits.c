#include<stdio.h>
void main()
{
	int n,reverse=0,remainder,sum=0;
	
	printf("Enter the number=");
	scanf("%d",&n);
	
	while(n!=0)					// eg n=253  253/10  r=3  again divide number 10
	{
		remainder= n%10;
		sum=sum+remainder;
		n=n/10;
			
	}
 	printf("Sum of digits= %d",sum);
}