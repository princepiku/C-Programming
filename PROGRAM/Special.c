// Special Operation.
#include <stdio.h> 
void main() 
{
	int a; 
	float b;
	double c; 
	char d;
	printf("---* Special Operation *---\n\n");
	printf("Size of int = %d bytes \n", sizeof(a));
	printf("Size of float = %d bytes \n", sizeof(b));
	printf("Size of double = %d bytes \n", sizeof(c));
	printf("Size of char = %d byte \n", sizeof(d));
}

/*

#include<stdio.h>
void main( )
{
	printf(" * and & operator\n\n"); 
	int number = 10, *pointer;
	pointer = &number; //Here the pointer stores the memory address of variable number.
	printf("The value of the Number : %d\n", *pointer);
	printf("The value of pointer: %d\n", pointer);
	printf("Address value of pointer : %d\n", &pointer);
	printf("Size of int value : %d bytes\n", sizeof(pointer));
}

*/

/*

Output : 
	* and & operator
	The value of the Number : 10
	The value of pointer: 6487580
	Address value of pointer : 6487568
	Size of int value : 8 bytes
	
*/	
