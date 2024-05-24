// Swap the Value Call by Value and Call by reference.

#include<stdio.h>
#include<conio.h>

void swapbyval(int a, int b)
{
  int t;
  t = a;
  a = b;
  b = t;
  printf("\nFunction is called \n");
  printf("The value of a is = %d.\nThe value of b is = %d\n\n", a, b);
}

void swapbyref(int *a, int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}

void main()
{
  int a, b;
  printf("Enter the value for a and b : ");
  scanf("%d %d", &a, &b);
  printf("\n----------------------------\n");
  printf("Call by value \n");
  printf("The value before swap \n");
  printf("a = %d and b = %d\n", a, b);
  swapbyval(a, b);
  printf("The value after swap \n");
  printf("a = %d and b = %d\n", a, b);
  printf("\n----------------------------\n");
  printf("Call by reference \n");
  printf("The value before swap \n");
  printf("a = %d and b = %d\n", a, b);
  swapbyref(&a, &b);
  printf("\nThe value after swap \n");
  printf("a = %d and b = %d\n", a, b);
}

