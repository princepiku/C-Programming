// WAP 2D Array Manipulation and Implement Matrix Multiplication.

#include<stdio.h>
#include<conio.h>    
#include<stdlib.h>
void main()
{  
	int a[10][10];
	int b[10][10];
	int mul[10][10];
	int r, c, i, j, k;
	printf("Enter the number of row : ");    
	scanf("%d", &r);    
	printf("Enter the number of column : ");    
	scanf("%d", &c);    
	printf("Enter the first matrix element : \n");    
	for(i = 0; i < r; i++)    
	{    
		for(j = 0; j < c; j++)    
		{    
			printf("Enter a[%d][%d] value : ", i, j);
			scanf("%d", &a[i][j]);    
		}    
	}    
	printf("Enter the second matrix element : \n");   
	for(i = 0; i < r; i++)    
	{    
		for(j = 0; j < c; j++)    
		{
			printf("Enter b[%d][%d] value : ", i, j);
			scanf("%d", &b[i][j]);    
		}    
	}    
    printf("Multiplication of the matrix : \n");    
	for(i = 0; i < r; i++)    
	{    
		for(j = 0; j < c; j++)    
		{    
			mul[i][j] = 0;    
			for(k = 0; k < c; k++)    
			{    
				mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
			}    
		}    
	}
	
	// for printing result.
	
	for(i = 0; i < r; i++)    
	{    
		for(j = 0; j < c; j++)    
		{    
			printf("\t%d", mul[i][j]);
		}    
		printf("\n");
	}
}
