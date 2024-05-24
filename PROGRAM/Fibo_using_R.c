// Fibonacci Series.

#include<stdio.h>
#include<conio.h>

void fibo(int, int, int);

void main()
{
	int a, b, n;
	printf("Enter 1st and 2nd term : \n");
	scanf("%d %d", &a, &b);
	printf("Enter the value of n : ");
	scanf("%d", &n);
	printf(" %d  %d ", a, b);
	fibo(a, b, n-2);	
}
void fibo(int a, int b, int n)
{
	int c;
	if(n == 0)
	return;
	c = a + b;
	printf(" %d ", c);
	a = b;
	b = c;
	fibo(a, b, --n);
}

