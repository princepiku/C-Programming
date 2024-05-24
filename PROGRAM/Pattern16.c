//WAP to Display Pattern.
/*
	 0  1  0  1
	 1  0  1
	 0  1
	 1
*/
#include<stdio.h>
void main()
{
	int i, j, n;
	printf("Enter the Number Of Elements : ");
	scanf("%d", &n);
	for(i = n; i >= 1; i--)
	{
		for(j = i; j >= 1; j--)
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
