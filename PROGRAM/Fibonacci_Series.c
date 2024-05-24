// WAP to Print the Fibonacci Series to Given Times.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, a = 0, b = 1, c, n;
	printf("Enter the Number of Times to Print : ");
	scanf("%d", &n);
	printf("%d \t %d \t", a, b);
	for(i = 1; i <= n; i++)
	{
		c = a + b;
		printf("%d \t",c);
		a = b;
		b = c;
	}
}

