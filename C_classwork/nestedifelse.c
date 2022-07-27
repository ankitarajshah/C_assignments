#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter value a:");
	scanf("%d",&a);
	printf("Enter value b:");
	scanf("%d",&b);
	printf("Enter value c:");
	scanf("%d",&c);
	printf("a=%d,b=%d,c=%d",a,b,c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\na is greater");
		}
		else
		{
			printf("\nc is greater");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nb is greater");
		}
		else
		{
			printf("\nc is greater");
		}
	}
}
