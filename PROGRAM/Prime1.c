//WAP to print the given Number is Prime Number or Not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 2, temp = 0, n;
	printf("Enter the Number : ");
	scanf("%d", &n);
	for(i = 2; i <= n-1; i++)
	{
		if(n % i == 0) 
		temp = temp + 1;
	}
	if(temp == 0)
		printf(" %d is a Prime Number", n);
	else
		printf(" %d is not a Prime Number", n);
}

//(Divisible By 1 And It Self = Prime Number)
/*
Output : 
	12 = Not Prime = 12 divisible by 1,2,3,4,6
	11 = Prime = 11 divisible by 1 and it self
*/
