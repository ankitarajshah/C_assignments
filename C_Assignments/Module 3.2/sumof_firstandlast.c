#include<stdio.h>
void main()
{
	int n,sum=0,first_digit,last_digit;
	
	printf("Enter number to find sum of first_digit and last_digit = ");
	scanf("%d",&n);
	
	last_digit= n % 10;
	printf("\nLast_digit = %d",last_digit);	//remainder will give last digit.
	
	while(n>=10)
	{
		n=n/10;	
	}	
	first_digit=n;
	printf("\nFirst_digit = %d",first_digit);	//quotient will give first digit.
	
	
	sum=first_digit+last_digit;
	printf("\nSum of first_digit and last_digit is %d",sum);
}