// Logical Operation.
#include <stdio.h>
void main()
{ 
	int a = 5, b = 5, c = 10, result;
	printf("---* Logical Operation *---\n\n");
	result = (a == b) && (c > b); 
	printf("(5 == 5) && (10 > 5) is %d \n", result); 
	result = (a == b) && (c < b); 
	printf("(5 == 5) && (10 < 5) is %d \n", result); 
	result = (a == b) || (c < b); 
	printf("(5 == 5) || (10 < 5) is %d \n", result); 
	result = (a != b) || (c < b); 
	printf("(5 != 5) || (10 < 5) is %d \n", result); 
	result = !(a != b);
	printf("!(5 != 5) is %d \n", result); 
	result = !(a == b);
	printf("!(5 == 5) is %d \n", result);
}

/*

Output : 
	---* Logical Operation *---
	(5 == 5) && (10 > 5) is 1
	(5 == 5) && (10 < 5) is 0
	(5 == 5) || (10 < 5) is 1
	(5 != 5) || (10 < 5) is 0
	!(5 != 5) is 1
	!(5 == 5) is 0
 
*/
