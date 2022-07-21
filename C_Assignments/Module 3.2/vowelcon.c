#include<stdio.h>
void main()
{
	char ch;
	printf("Enter character : ");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 'A':
		case 'a':printf("\nIt is vowel");
		break;
		case 'E':
		case 'e':printf("\nIt is vowel");
		break;
		case 'I':
		case 'i':printf("\nIt is vowel");
		break;
		case 'O':
		case 'o':printf("\nIt is vowel");
		break;
		case 'U':
		case 'u':printf("\nIt is vowel");
		break;
		default:printf("\n It is consonant");
		break;
	}
}