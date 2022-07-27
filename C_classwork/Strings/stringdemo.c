#include<stdio.h>
void main()
{
	char name[10];
	int length;
	printf("Enter name:");
	//scanf("%s",&name);		//After space it do not take i/p
	
	gets(name);		//used for space in name
	printf("\nName is %s",name);
	length=sizeof(name);	//variable for size of char array
	printf("\nSize of name is %d Bytes",length);
	
}