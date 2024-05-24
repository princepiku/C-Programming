// WAP to Print the Fibonacci Series to Given Times Using Array.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20];
	int n, i, c;
	a[0] = 0, a[1] = 1;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("%d \t %d \t", a[0], a[1]);
	for(i = 1; i <= n; i++)
	{
		c = a[0]+a[1];
		printf("%d \t",c);
		a[0] = a[1];
		a[1] = c;
	}
}
