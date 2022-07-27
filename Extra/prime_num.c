#include<stdio.h>

void main()
{
	int num,i,prime;
	printf("Enter number =");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num % i ==0)
		{
			prime++;
		}
	}
	if(prime==2)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is odd number",num);
	
	}
}