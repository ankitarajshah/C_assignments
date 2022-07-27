#include<stdio.h>
void main()
{
	int year;
   	printf("Enter a year: ");
   	scanf("%d", &year);
//   	if(year % 400 == 0)
//   	{
//		printf("%d is year is leap year",year);
//		}
//			else if (year % 100 == 0)
//		{
//			printf("%d year is not leap year",year);
//		}
//		else 
//		if(year % 4 == 0)
//		{
//			printf("%d year is leap year",year);
//		}
//	else
//	{
//		printf("%d year is not leap year",year);
//	}
	if(year % 400 == 0)
	{
		if(year % 4 == 0)
		{
			printf("%d year is leap year",year);
		}
		else
		{
			printf("\n%d year is not leap year",year);
		}
	}
	else
	{
		if(year % 100 == 0)
		{
			printf("\nEnter correct year");
		}
		else
		{
			printf("\n%d year is not leap year",year);
		}
	}
}
