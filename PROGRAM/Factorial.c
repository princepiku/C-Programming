//WAP to Display the Factorial to Given Number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, fact = 1, no;
	printf("Enter The Number : ");
	scanf("%d", &no);
	if(no >= 0)
	{
		for(i = 1; i <= no; i++)
		{
			fact = fact * i;	
		}
		printf("%d! = %d ", no, fact);
	}
	else
		printf("Invalid Input !");
	
}
