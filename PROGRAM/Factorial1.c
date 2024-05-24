// WAP to Print Factorial of given number Using Array.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=1,fact=1;
	printf("Enter the Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("%d!= %d", n, fact);		
}
