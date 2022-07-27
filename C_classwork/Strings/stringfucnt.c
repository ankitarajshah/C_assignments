
#include<stdio.h>
#include<string.h>

void main()
{
	char name[10]="Hello";
	char lname[10]="World";
	
	printf("\nString length :%d",strlen(name)); 	//length 
//	printf("\nString reverse :%s",strrev(name));
//	printf("\nString concatenation: %s",strcat(name,lname));
//	printf("\nString copy :%s",strcpy(name,lname));
	printf("\nString compare :%d",strcmp(name,lname));

	printf("\nString Uppercase : %s",strupr(name));
	printf("\nString Lowercase : %s",strlwr(lname));
}