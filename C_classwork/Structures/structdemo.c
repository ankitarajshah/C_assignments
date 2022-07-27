#include<stdio.h>
struct Student
{
	int sid;
	char sname[20];
	int marks; 
};

void main()
{
	struct Student s1;
	printf("-----Accept Student details-----");
	printf("\n Enter Student ID:");
	scanf("%d",&s1.sid);
	fflush(stdin);	//when using gets need clear buffer value in memory //enter key pressed ascii value ....
	printf("\n Enter Student name:");
	gets(s1.sname);
	printf("\n Enter Student marks:");
	scanf("%d",&s1.marks);
	
	printf("-----Display Student details-----");
	printf("\nStudent ID is %d",s1.sid);
	printf("\nStudent Name is %s",s1.sname);
	printf("\nStudent Marks is %d",s1.marks);
	
	printf("\n Size of structure is %d",sizeof(s1));
}
