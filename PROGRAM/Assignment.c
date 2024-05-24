// Assignment Operation.
#include <stdio.h> 
void main() 
{ 
	int a = 5, c;
	printf("---* Assignment Operation *---\n\n");
	c = a; 
	// c is 5 
	printf("c = %d\n", c); 
	c += a; 
	// c is 10 
	printf("c = %d\n", c); 
	c -= a; 
	// c is 5 
	printf("c = %d\n", c); 
	c *= a; 
	// c is 25 
	printf("c = %d\n", c); 
	c /= a; 
	// c is 5 
	printf("c = %d\n", c); 
	c %= a; 
	// c = 0 
	printf("c = %d\n", c); 
}

/*

Output : 
	---* Assignment Operation *---
	c = 5
	c = 10
	c = 5
	c = 25
	c = 5
	c = 0

*/
