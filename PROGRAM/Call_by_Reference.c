#include<stdio.h>
void main()
{
	int n = 5, r;
	r = fact(n);
	printf("The Factorial of Integer %d is %d ",n,r);
	
}
fact(int m)
{
	if((m == 0)||(m == 1))
	return(1);
	else
	return(m *fact(m -1));
}

