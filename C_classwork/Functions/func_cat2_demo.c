#include<stdio.h>
int add()  //returntype and no parameter
{
	int a,b;
	printf("Enter value for a and b :");
	scanf("%d %d",&a,&b);
	//printf("Addition = %d",a+b);
	return a+b; //returntype
}

void main()
{
	printf("Addition = %d",add());	
}