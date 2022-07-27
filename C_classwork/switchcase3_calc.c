#include<stdio.h>
void main()
{
	int choice;
	int a,b;
	
	printf("Enter number A:");
	scanf("%d",&a);
	printf("Enter number B:");
	scanf("%d",&b);
	printf("\nA is %d,B is %d",a,b);
	
	printf("\nEnter choice:");
	scanf("%d",&choice);
	
//	switch(choice)
//	{
//		case 'a':printf("Addition is %d ",a+b);
//				break;
//		case 'b':printf("Subtraction is %d ",a-b);
//				break;
//		case 'c':printf("Multiplication is %d ",a*b);
//				break;
//		case 'd':printf("Division is %d ",a/(float)b);
//				break;
//		case 'e':printf("Modulo is %d ",a%b);
//				break;	
//		default:printf("Wrong choice.");	
//	}

switch(choice)
	{
		case 1:printf("Addition is %d ",a+b);
				break;
		case 2:printf("Subtraction is %d ",a-b);
				break;
		case 3:printf("Multiplication is %d ",a*b);
				break;
		case 4:printf("Division is %.2f ",a/(float)b);
				break;
		case 5:printf("Modulo is %d ",a%b);
				break;	
		default:printf("Wrong choice.");	
	}


	printf("Thankyou.");
}
