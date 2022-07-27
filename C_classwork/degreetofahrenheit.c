//(0°C × 9/5) + 32 = 32°F			(32°F − 32) × 5/9 = 0°C


#include<stdio.h>
void main()
{
	float temp,f,t;
	printf("Enter temperature in celcius:");
	scanf("%f",&temp);
	//f=((t*9/5)+32);
	f=((temp*1.8)+32);
	printf("Temperature in Fahrenheit is %.2f\n",f);
	t=((f-32)*5/9);
	printf("Temperature in celius is %.2f",t);
	
}