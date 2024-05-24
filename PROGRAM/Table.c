// Display Table.

#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i = 1;
	int table;
	printf("Enter a Number : ");
	scanf("%d", &n);
	
	// for(i = 1; i <= 10; i++)
	
	while(i <= 10)
	{
		table = n * i;
		printf("%d\n",table);
		i++;
	}
}
