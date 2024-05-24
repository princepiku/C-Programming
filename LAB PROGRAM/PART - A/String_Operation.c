// WAP to implement string operations such as compare, concatenate, string length. Convince the parameters passing techniques.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void stringlength(char a[100], char b[100]);
void concatenate(char a[100], char b[100]);
void stringcompare(char a[100], char b[100]);

void main()
{
	char p[100], q[100];
	int len1, len2;
	printf("Enter the first string : ");
	gets(p);
	printf("Enter the second string : ");
	gets(q);
	stringlength(p,q);
	stringcompare(p,q);
	concatenate(p,q);
}

void stringlength(char a[100], char b[100])
{
	int len1, len2;
	len1 = strlen(a);
	len2 = strlen(b);
	printf("First string length -> %d \nSecond string length -> %d ", len1, len2);
}

void concatenate(char a[100], char b[100])
{
	printf("The concatenated string : %s ", strcat(a,b));
}

void stringcompare(char a[100], char b[100])
{
	if(strcmp(a,b) == 0)
		printf("\nString are equal !\n");
	else
		printf("\nString are not equal !\n");
}

