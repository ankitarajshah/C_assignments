#include<stdio.h>
void main()
{
	char name[10];
	int rollno,s1,s2,s3,total;
	float per;
	char symbol='%';
	printf("\n---Student Details---");
	printf("\nEnter Roll number:");
	scanf("%d",&rollno);
	printf("\nEnter Name : ");
	scanf("%s",&name);
	printf("\nEnter Physics marks:");
	scanf("%d",&s1);
	printf("\nEnter Chemistry marks:");
	scanf("%d",&s2);
	printf("\nEnter Maths marks:");
	scanf("%d",&s3);
	total= s1+s2+s3;
	per=(float)total/3;
	printf("\nTotal PCM marks: %d",total);
	printf("\nPercentage is %.2f%c",per,symbol);
	printf("\nGrade :");
	if(per>70)
	{
		printf("Distinction.");
	}
		else if(per>60)
		{
			printf("First class.");
		}
		else if(per>50)
		{
			printf("Second class.");		
		}
		else if(per>40)
		{
			printf("Pass.");
		}
	else 
		{
			printf("Fail.");
		}
	
	printf("----Thankyou-----");
}