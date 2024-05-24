// Display the Palindrome Number or Not.
#include<stdio.h>
#include<string.h>
void main()
{
   char s[1000];  
   int i, n, c = 0;
   printf("Enter the String : ");
   gets(s);
   n = strlen(s);
   for(i = 0; i < n / 2; i++)
   {
   		if(s[i] == s[n - i - 1])
		c++;
   }
	if(c == i)
	{
		printf("%c String is Palindrome", n);
	}	
   else
   {
   		printf("%c String is not Palindrome", n);
   }
}

