//WAP to Perform the Arithmetic Operation.
#include<stdio.h>
void main()
{
	int num1, num2, total;
	int op;
	printf("Enter First Number : ");
	scanf("%d", &num1);
	printf("Enter Second Number : ");
	scanf("%d", &num2);
	printf("Please Enter Case : \n");
	printf("1. For Addition \n");
	printf("2. For Substraction \n");
	printf("3. For Multiplication \n");
	printf("4. For Division \n");
	printf("5. For Remainder \n");
	scanf("%d", &op);
	switch(op)
	{
		case 1 : total = num1 + num2;
			printf("Addition = %d \n", total);
			break;
		case 2 : total = num1 - num2;
			printf("Substraction = %d \n", total);
			break;
		case 3 : total = num1 * num2;
			printf("Multiplication =  %d \n", total);
			break;
		case 4 : total = num1 / num2;
			printf("Division = %d \n", total);
			break;
		case 5 : total = num1 % num2;
			printf("Remainder when a divided by Number2 = %d \n", total);
			break;
		default : printf("Oops Sorry Invalid Input !");
	}
}
