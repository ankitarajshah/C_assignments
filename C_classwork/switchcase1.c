#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case'a':printf("It is vowel.");
				break;
		case'e':printf("It is vowel.");
				break;
		case'i':printf("It is vowel.");
				break;
		case'o':printf("It is vowel.");
				break;		
		case'u':printf("It is vowel.");
				break;
		default:printf("\n It is consonant");
				break;
	}
	printf("\nOut of switch");
	
}