# include <stdio.h>
void main()
{
	int n;
	printf("Enter integer n:");
	scanf("%d",&n);
	(n % 2 == 0) ? printf("%d is Even number",n):printf("%d is Odd number",n);
}