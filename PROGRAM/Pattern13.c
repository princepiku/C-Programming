//WAP to Disaplay Pattern.
/*
		D C B A
		d c b
		D C
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
		for(j = n; j >= i ; j--)
		{
			if(i % 2 == 0)
			{
				printf(" %c ",(char)(96+j));
			}
			else
				printf(" %c ",(char)(64+j));
			
		}
		printf("\n");
	}
}
