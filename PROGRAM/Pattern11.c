//WAP to Disaplay Pattern.
/*
		D  c  B  a
		D  c  B
		D  c
		D
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
			if(j % 2 == 0)
			{
				printf(" %c ",(char)(64+j));
			}
			else
				printf(" %c ",(char)(96+j));
			
		}
		printf("\n");
	}
}
