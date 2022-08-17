#include<stdio.h>
void primenum(int num)
{
	int i,prime;
	for(i=1;i<=num;i++)
	{
		if(num % i ==0)
		{
			prime++;
		}
	}
	if(prime == 2)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is not prime number",num);
	}	
}
void main()
{
	int num;
	printf("Enter number =");
	scanf("%d",&num);
	primenum(num);	
}