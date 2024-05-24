// WAP to Display Function.

/*

// 1: no give argument and no return value.

#include<stdio.h>
#include<conio.h>
void printline(void);
void main()
{
	printline();
}
void printline()
{
	int i;
	for(i=1;i<=80;i++)
	printf("%c",'c');
	printf("\n");
}

*/

// 2: give argument and no return vale.

/*

#include<stdio.h>
#include<conio.h>
void printline(char);
void main()
{
	char ch;
	ch = '*';
	printline(ch);
}
void printline(char c)
{
	int i;
	for(i=1;i<=80;i++)
	printf("%c",c);
	printf("\n");
}

*/

// 3. give multiple argument and multiple return value using pointer.
#include<stdio.h>
#include<conio.h>

int getSumAndProduct(int a, int b, int *product)

{
   *product = a * b;
   return a + b;
   
}
int Substract(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
void main()
{
	int a, b, sum, sub, mult, product;
    
   printf("Enter two integers\n");
   scanf("%d %d", &a, &b);
	 
	sum = getSumAndProduct(a, b, &product);
   sub = Substract(a, b);
   mult = Product(a, b);
   
   printf("Sum = %d\nProduct = %d\nSub = %d\nMult = %d",sum,product,sub,mult);
}

