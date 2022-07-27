#include<stdio.h>
void main()
{
	int choice,l,b,h,r;
	float area;
	printf("Choice menu:\n");
	printf("1 = Area of circle.\n");
	printf("2 = Area of triangle.\n");
	printf("3 = Area of rectangle.\n");
	printf("Enter the choice from menu:\n");
	scanf("%d",&choice);	
	
	if(choice == 1)
	{
		printf("Enter the radius of circle.\n");
		scanf("%d",&r);
		area = 3.14*2*r;
		printf("Area of circle is %.2f",area);
	}
	else
		if(choice == 2)
		{	
		printf("Enter the length and breadth of triangle.\n");
		scanf("%d%d",&l,&b);
		area = 0.5*l*b;
		printf("Area of triangle is %.2f",area);
		}
		else
			if(choice == 3)
			{
			printf("Enter the length and breadth of rectangle.\n");
			scanf("%d%d",&l,&b);
			area = (l*b);
			printf("Area of rectangle is %.2f",area);
			}
			else
			{
				printf("Wrong choice.");
			}
}