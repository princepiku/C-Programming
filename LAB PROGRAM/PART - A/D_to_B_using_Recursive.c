// WAP to implement recursive functions for Decimal to Binary Conversion.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int convert(int decimal);

void main()
{
	int decimal, binary;
	printf("Enter a decimal number : ");
	scanf("%d", &decimal);
	binary = convert(decimal);
	printf("The binary equivalent of %d is %d.\n", decimal, binary);
}

int convert(int decimal)
{
	if (decimal == 0)
	{
		return 0;
	}
	else
	{
		return (decimal % 2 + 10 * convert(decimal / 2));
	}
}
