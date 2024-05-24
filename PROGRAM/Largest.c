// WAP to Print the Largest Value of Three Number Using Conditional Operator(Ternary Operator & if else Condition).
#include <stdio.h>
void main()
{
	int a, b, c, large, small;
	int Snd_large, Snd_small ;
	printf("Enter The Three Numbers :\n");
	scanf("%d %d %d", &a, &b, &c);
	large = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	large = (a > b) ? a : b;
	large = (large > c) ? large : c;
	/*
	if(a > b)
	{
		large = a;
		small = b;
	}
	else
		large = b;
		small = a;
	if (c > large)
		large = c;
	if(c < small)
		small = c;
	Snd_large = (a + b + c) - (large + small);
	Snd_small = (a + b + c) - (large + small);
	*/		
	printf("1st Largest Value of Three Numbers : %d \n", large);
	printf("1st Smallest Value of Three Numbers : %d \n", small);
	printf("2nd Largest Value of Three Numbers : %d \n", Snd_large);
	printf("2nd Smallest Value of Three Numbers : %d \n", Snd_small);	
}
