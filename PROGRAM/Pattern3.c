//WAP to Display Pattern.
/*
		*
		* *
		* * *
		* * * *
		* * * * *
*/

#include<stdio.h>
void main()
{
	int i, j, n;
	printf("Enter the number of rows : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		for(j = i; j >= 1; j--)
		{
			printf(" * ");	
		}
		printf("\n");
	}
}