#include<stdio.h>
void main()
{
	int i=10;
	int *p;
	p=&i;
	printf("Value Of i = %d\n",*p);
	printf("Value Of i = %d\n",i);
	printf("Address Of i = %u\n",&i);
	printf("Address Of i = %d\n",p);
	printf("Address Of p = %u\n",&p);
}
