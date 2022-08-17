#include<stdio.h>
int reverse(int n)
{
	while(n!=0)
	{
		int rev =0,rem;
		rem = n%10;
		rev = rev*10 + rem;
		n = n/10;
		reverse(n);		
	}
}
void main()
{
	int n,original;
	printf("Enter number :\n");
	scanf("%d",&n);
	printf("\nNumber before reverse = %d",n);
	original = n;

	printf("\nReversed number is %d",reverse(n));
	if(original == reverse(n))
	{
		printf("\nNumber %d is palindrome.",original);
	}
	else
	{
		printf("\nNumber %d is not palindrome.",original);
	}
}