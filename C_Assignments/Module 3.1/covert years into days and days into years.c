#include<stdio.h>
void main()
{
	{
    // days into years
    int years1, days1;
    days1 = 365;
    years1 = days1 / 365;
    printf("Years: %d\n", years1);

    // years into days
    int years2, days2;
    years2 = 4;
    days2 = years2 * 365;
    printf("Days: %d\n", days2);
}
}