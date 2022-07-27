#include<stdio.h>
void main()
{
	char name[20],gen[10];
	int age,choice,pur_amt,disc_amt,net_amt;
	
	printf("-------Enter Customer Details------");
	printf("\nEnter name of person: ");
	scanf("%s",&name);
	printf("\nEnter age of person: ");
	scanf("%d",&age);
	printf("\nEnter gender of person:1-Male,2-Female");
	printf("\nEnter gender of person :");
	scanf("%d",&choice);
	printf("\nEnter the purchase amount :");
	scanf("%d",&pur_amt);

	if(pur_amt>100000)
	{
		if(choice == 1)
		{
			if(age>60)
			{
			disc_amt = (pur_amt*10)/100;
			printf("\nPurchase amount = %d",pur_amt);
			printf("\nDiscount = 10%");
			printf("\nDiscount amount = %d",disc_amt);
			printf("\nGender = Male");
			}	
			else
			{
			disc_amt = (pur_amt*5)/100;
			printf("\nPurchase amount = %d",pur_amt);
			printf("\nDiscount = 5%");
			printf("\nDiscount amount = %d",disc_amt);
			printf("\nGender = Male");	
			}
		}
		else
		{
			if(age>60)
			{
			disc_amt = (pur_amt*20)/100;
			printf("\nPurchase amount = %d",pur_amt);
			printf("\nDiscount = 20%");
			printf("\nDiscount amount = %d",disc_amt);
			printf("\nGender = Female");
			}
			else
			{	
			disc_amt = (pur_amt*10)/100;
			printf("\nPurchase amount =%d",pur_amt);
			printf("\nDiscount = 10%");
			printf("\nDiscount amount = %d",disc_amt);
			printf("\nGender = Female");	
			}
		}
	}
	else
		{
		printf("\nPurchase amount =%d",pur_amt);
		printf("\nThankyou.");
		}
	
	printf("\n-----Customer Detail summary------");
	printf("\nName of person = %s",name);
	printf("\nAge =%d",age);
	printf("\nPurchase amount = %d",pur_amt);
	printf("\nDiscount Amount = %d",disc_amt);
	printf("\nNet Amount = %d",pur_amt-disc_amt);
}