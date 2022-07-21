#include <stdio.h>
void main()
{
char ch;
printf("\nEnter M for Monday,\nT for Tuesday,\nW for Wednesday,\nH for Thursday,\nF for Friday,\nS for Saturday,\nu for sunday\n");
scanf("%c",&ch);
switch(ch)
	{
		case 'm':
		case 'M':printf("\nMonday");
		break;
		case 't':
		case 'T':printf("\nTuesday");
		break;
		case 'w':
		case 'W':printf("\nWednesday");
		break;
		case 'H':
		case'h':printf("\nThursday");
		break;
		case 'F':
		case 'f':printf("\nFriday");
		break;
		case 'S':
		case 's':printf("\nSaturday");
		break;
		case 'U':
		case 'u':printf("\nSunday");
		break;
		default:printf("Wrong input");
		break;	
	}
}