#include<stdio.h>
#include<conio.h>
void swap1(int a, int b);
void swap2(int *a, int *b);

void main()
{
	int num1, num2;
	printf("Enter the Value for Num1 : ");
	scanf("%d",&num1);
	printf("Enter the Value for Num2 : ");
	scanf("%d",&num2);
	printf("\nBefore Swap the Value \nNum1 = %d\nNum2 = %d",num1,num2);
	swap1(num1,num2);
	swap2(&num1,&num2);
}
void swap1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter Swap Call by Value \nNum1 = %d\nNum2 = %d",a,b);
}

void swap2(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("\nAfter Swap Call by Reference \nNum1 = %d\nNum2 = %d",*a,*b);
}

