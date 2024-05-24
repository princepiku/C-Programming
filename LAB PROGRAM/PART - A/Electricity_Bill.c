// WAP to program we are going to estimate electric bill charges according to the given conditions in the questions.
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[20];
	float unit, price, extra;
	printf("\nEnter Consumer's name : \n");
	gets(name);
	printf("\nEnter units of electricity used : \n");
	scanf("%f", &unit);
	if(unit <= 200)
	{
		price = (80 * unit) / 100;
		puts(name);
		printf("\nUnits = %.2f \n Rate = 80 paisa / unit \n Meter charges = 100 \n Price = %.2f", unit, price);
	}
	else if(unit > 200 && unit <= 300)
	{
		extra = unit - 200;
		price = (80 * unit) / 100 + 90 * extra / 100;
		puts(name);
		printf("\nUnits = %.2f \n Rate = 80 paisa / unit for 200 units and 90 paisa / unit above \n Meter charges = 100 \n Price = %.2f", unit, price);
	}
	else if(unit > 300 && unit <= 400)
	{
		price = unit + 100;
		puts(name);
		printf("\nUnits = %.2f \n Rate = 1 rupees / unit \n Meter charges = 100 \n Price = %.2f", unit, price);
	}
	else if(unit > 400)
	{
		price = 250 + (unit - 300) * 1;
		puts(name);
		price += price * 0.15;
		printf("\nUnits = %.2f \n Rate = 1 rupees / unit \n Extra charges = 15 / 100 of total \n Meter charges = 100 \n Price = %.2f", unit, price + 100);
	}
}

