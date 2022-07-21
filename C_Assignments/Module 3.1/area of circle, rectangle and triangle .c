#include<stdio.h>
void main()
{
	const float pi=3.14;
	float radius,length,breadth;
	printf("Enter radius of circle:\n");
	scanf("%f",&radius);
	printf("Area of circle is %.2f\n",(pi*radius*radius));
	printf("Enter length and breadth:\n");
	scanf("%f%f",&length,&breadth);
	printf("Area of rectangle is %.2f\n",(length*breadth));
	printf("Area of triangle is %.2f",(0.5*length*breadth));
}