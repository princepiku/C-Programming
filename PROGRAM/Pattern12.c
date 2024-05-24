//WAP to Disaplay Pattern.
/*
		a  B  c  D
		B  c  D
		c  D
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
		for(j = i; j <= n ; j++)
		{
			if(j % 2 == 0)
			{
				printf(" %c ",(char)(j+64));
			}
			else
				printf(" %c ",(char)(j+96));
			
		}
		printf("\n");
	}
}
