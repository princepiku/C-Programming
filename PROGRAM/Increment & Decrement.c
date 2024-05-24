// Pre & Post - Increment and Decremnet Operation.

/*

#include <stdio.h>
void main()
{
	int a = 10;
	float b = 10.5;
	int c = 100;
	float d = 100.5;
	printf("++a = %d \n",++a);
	printf("--b = %2f \n",--b);
	printf("++c = %d \n",++c);
	printf("--d = %2f \n",--d);
}

#include <stdio.h>
void main()
{
	int a = 10;
	float b = 10.5;
	int c = 100;
	float d = 100.5;
	printf("a++ = %d \n",a++);
	printf("b-- = %.2f \n",b--);
	printf("c++ = %d \n",c++);
	printf("d-- = %.2f \n",d--);
}

*/

// Increment  and  Decrement  Operation.
#include <stdio.h>
void main() 
{
	int a = 10, b = 100; 
	float c = 10.5, d = 100.5;
	printf("---* Increment and Decrement *--- \n\n");
	printf("int a = 10 and b = 100\n\n");
	printf("float a = 10.5 and b = 100.5\n\n");
	printf("Pre - Increment [++a] = %d \n", ++a); 
	printf("Post - Increment [a++] = %d \n", a++);
	printf("Pre - Decrement [--b] = %d \n", --b); 
	printf("Post - Decrement [b--] = %d \n", b--);

	printf("Pre - Increment [++c] = %.2f  \n", ++c); 
	printf("Post - Increment [c++] = %.2f  \n", c++);
	printf("Pre - Decrement [--d] = %.2f  \n", --d);
	printf("Post - Decrement [d--] = %.2f  \n", d--);
}

