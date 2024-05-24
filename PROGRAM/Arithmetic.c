// Arithmetic Operation.
#include <stdio.h>
int main()			// void main()
{
	int a = 9, b = 4, c;
	printf("---* Arithmetic Operation *---\n\n");
	c = a + b; 
	printf("Addition = %d \n",c); 
	c = a - b; 
	printf("Subtraction = %d \n",c); 
	c = a * b; 
	printf("Multiplication = %d \n",c); 
	c = a / b; 
	printf("Division = %d \n",c); 
	c = a % b; 
	printf("Remainder when a divided by b = %d \n",c); 
	return 0;
}

/*

Output : 
	---* Arithmetic Operation *---
	Addition = 13 
	Subtraction = 5 
	Multiplication = 36 
	Division = 2 
	Remainder when a divided by b = 1  

*/
