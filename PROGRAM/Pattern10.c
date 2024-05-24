//WAP to Disaplay Pattern.
/*
		A b C d
		b C d
		C d
		d
*/
		
#include<stdio.h>
#include<string.h>
void main()
{
	int i, j, n;
	printf("Enter the number of rows : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		for(j = i; j <= n ; j++)
		{
			if(j % 2 == 0)
			{
				printf(" %c ",(char)(j+96));
			}
			else
				printf(" %c ",(char)(j+64));
			
		}
		printf("\n");
	}
}
