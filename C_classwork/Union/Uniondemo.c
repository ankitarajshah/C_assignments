#include<stdio.h>
union Student
{
	int sid;
	char sname[20];
	int marks; 
};
void main()
{
	union Student s1;
	printf("-----Accept Student details-----");
	printf("\nEnter Student ID:");
	scanf("%d",&s1.sid);
	printf("Student ID is %d",s1.sid);
	fflush(stdin);	//when using gets need clear buffer value in memory //enter key pressed ascii value ....
	printf("\n");
	printf("\nEnter Student name:");
	gets(s1.sname);
	printf("Student Name is %s",s1.sname);
	printf("\n");
	printf("\nEnter Student marks:");
	scanf("%d",&s1.marks);
	printf("Student Marks is %d",s1.marks);
//	printf("-----Display Student details-----");
	
	printf("\n Size of Union is %d",sizeof(s1));
	
		
}
