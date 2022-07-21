#include<stdio.h>
#include<string.h>
void main()
{
	char ch[10],temp[10];
	printf("Enter string to be reversed: ");
	scanf("%s",&ch);
	printf("\nBefore reversed string:%s",ch);
	printf("\nTemp string copy :%s",strcpy(temp,ch));
	printf("\nBefore reversed string:%s",temp);
	printf("\nAfter reversed string:%s",strrev(ch));
	printf("\nString compare :%d",strcmp(ch,temp));
	if(strcmp(ch,temp)== 0)
	{
		printf("String %s is palindrome. ",ch);
	}
	else
	{
		printf("String %s is not palindrome",ch);
	}
}