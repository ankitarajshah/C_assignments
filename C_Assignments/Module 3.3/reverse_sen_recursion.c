#include<stdio.h>
void rev_sen()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		rev_sen();
		printf("%c",c);
	
	}
}
void main()
{
	printf("Enter the sentence :");
	rev_sen();	
}