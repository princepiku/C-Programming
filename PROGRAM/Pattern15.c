// WAP to Display Pattern.
/*
	 1  0  1  0
	 0  1  0
	 1  0
	 0
*/
#include<stdio.h>
void main()
{
	int i, j, n;
	printf("Enter the Number Of Elements : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		for(j = i; j <= n; j++)
		{
			if(j % 2 == 0)
			{
				printf(" 0 ");
			}
			else
				printf(" 1 ");
		}
		printf("\n");
	}	
}
