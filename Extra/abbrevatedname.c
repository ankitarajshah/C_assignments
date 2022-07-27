//Convert a Person’s Name in Abbreviated
#include<stdio.h>
void main()
{
	char fname[20],mname[20],lname[20];
	printf("Enter full name:(First name,middle name,last name)");
	scanf("%s%s%s",&fname, &mname, &lname);
	printf("Abbreviated name :");
	printf("%c.%c.%s",fname[0],mname[0],lname);
	
}