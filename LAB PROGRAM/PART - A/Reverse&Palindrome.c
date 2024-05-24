// WAP to Find the Reverse Number of Given Integer Number and also check Palindrome or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, rev = 0, rem, num;
	printf("Enter a Number : ");
	scanf("%d", &n);
	num = n;
	while(n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;

	}
	printf("%d Reverse %d \n", num, rev);
	if(num == rev)
	{
		printf("Palindrome Number. \n");	
	}
	else
		printf("Not a Palindrome Number. \n");	
}

