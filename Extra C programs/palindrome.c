#include<stdio.h>
void main()
{
	int n,reverse=0,rem,original;
	printf("Enter number :\n");
	scanf("%d",&n);
	printf("\nNumber before reverse = %d",n);
	original = n;
	while(n!=0)
	{
		rem = n%10;
		reverse = reverse*10 + rem;
		n = n/10;		
	}
	printf("\nReversed number is %d",reverse);
	if(original == reverse)
	{
		printf("\nNumber %d is palindrome.",original);
	}
	else
	{
		printf("\nNumber %d is not palindrome.",original);
	}
}