// Relational Operation.
#include <stdio.h>
void main() 
{ 
	int a = 5, b = 5, c = 10;
	printf("---* Relational Operation *---\n\n"); 
	printf("%d == %d is %d \n", a, b, a == b); 
	printf("%d == %d is %d \n", a, c, a == c); 
	printf("%d > %d is %d \n", a, b, a > b); 
	printf("%d > %d is %d \n", a, c, a > c); 
	printf("%d < %d is %d \n", a, b, a < b); 
	printf("%d < %d is %d \n", a, c, a < c); 
	printf("%d != %d is %d \n", a, b, a != b); 
	printf("%d != %d is %d \n", a, c, a != c); 
	printf("%d >= %d is %d \n", a, b, a >= b); 
	printf("%d >= %d is %d \n", a, c, a >= c); 
	printf("%d <= %d is %d \n", a, b, a <= b); 
	printf("%d <= %d is %d \n", a, c, a <= c);
} 

/*

Output : 
	---* Relational Operation *---
	5 == 5 is 1
	5 == 10 is 0
	5 > 5 is 0
	5 > 10 is 0
	5 < 5 is 0
	5 < 10 is 1
	5 != 5 is 0
	5 != 10 is 1
	5 >= 5 is 1
	5 >= 10 is 0
	5 <= 5 is 1
	5 <= 10 is 1
 
*/
