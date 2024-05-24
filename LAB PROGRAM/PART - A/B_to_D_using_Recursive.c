// WAP to implement recursive functions for Binary to Decimal Conversion.

#include<stdio.h>
#include<coni.h>
#include<math.h>

int conversion(long binary)
{
	int rem, val = 0, i = 0;
	while(binary!=0)
	{
		rem = binary % 10;
		binary/= 10;
		val+= rem * pow(2,i);
		i++; 
	}
	return val;
}

void main()
{
	long binary;
	int decimal;
	printf("Enter a binary number : ");
	scanf("%ld", &binary);
	decimal = conversion(binary);
	printf("The decimal equivalent of %ld is %d.\n", binary, decimal);
}


