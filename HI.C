#include<stdio.h>
void main()
{
	float celsius,f;
	clrscr();
	printf("Enter Temperature in Celsius: ");
	scanf("%f",&celsius);

	f=(9.0/5.0*celsius)+32;

	printf("Converted Temperature is: %f",f);

	getch();
}