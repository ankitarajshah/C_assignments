#include<stdio.h>
void main()
{
	int n,reverse=0,remainder;
	
	printf("Enter the number=");
	scanf("%d",&n);
	
	while(n!=0)					// eg n=253  253/10  r=3  reverse= 0*10+3 reverse =3 again divide number 10
	{
		remainder= n%10;
		reverse =reverse * 10+remainder;
		n=n/10;
	}
	printf("Reversed number is %d",reverse);
}