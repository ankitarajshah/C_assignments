#include<stdio.h>
struct employee
{
	int eid;
	char ename[20];
	char eadd[20];
	int age;	
};
void main()
{
	struct employee e1;
	printf("------Enter Employee Details-------");
	printf("\nEnter the employee ID : ");
	scanf("%d",&e1.eid);
	fflush(stdin);
	printf("\nEnter the employee name :");
	gets(e1.ename);
	printf("\nEnter the address of employee :");
	gets(e1.eadd);
	printf("\nEnter the age of employee :");
	scanf("%d",&e1.age);
	
	printf("------Employee Details-------");
	printf("\n Employee ID : %d",e1.eid);
	printf("\n Employee Name : %s",e1.ename);
	printf("\n Employee Address :%s",e1.eadd);
	printf("\n Employee Age :%d",e1.age);

}