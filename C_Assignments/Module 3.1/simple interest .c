#include<stdio.h>
void main()
{
	float Simple_Interest,Principle_amount,Time,Rate;
	printf("Enter Principle_amount:\n");
	scanf("%f",&Principle_amount);
	printf("Time:\n");
	scanf("%f",&Time);
	printf("Rate\n");
	scanf("%f",&Rate);
	Simple_Interest=(Principle_amount*Time*Rate)/100;
	printf("%f",Simple_Interest);
	
}