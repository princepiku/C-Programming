// Bitwise Operation.
#include <stdio.h>
void main()
{
	printf("---* Bitwise Operation *---\n\n");
	int a = 26, b = 14;
	printf(" Bitwise AND operation %d & %d : %d \n", a, b, a & b);
	printf(" Bitwise OR operation %d | %d : %d \n", a, b, a | b);
	printf(" Bitwise XOR operation %d ^ %d : %d \n", a, b, a ^ b);
	printf(" Bitwise ONE'S COMPLEMENT ~ %d operation : %d \n", a, ~a);
}

/*

Output : 
	---* Bitwise Operation *---
	Bitwise AND operation  26 & 14 : 10
	Bitwise OR operation  26 | 14 : 30
	Bitwise XOR operation  26 ^ 14 : 20
	Bitwise ONE'S COMPLEMENT ~ 26 operation : ~ 27
	 
*/
	

