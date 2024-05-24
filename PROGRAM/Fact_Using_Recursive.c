// Factorail Series.

#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n <= 1)
	{
		return 1;
	}
	return n * fact(n - 1);
}
void main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	printf("Fact of %d is %d\n",n, fact(n));
}
