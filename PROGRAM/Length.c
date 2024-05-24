#include<stdio.h>
void main()
{
	char *ch,str[25];
	int len=0;
	printf("Enter the String : ");
	gets(str);
	ch=str;
	while(*ch!='\0')
	{
		len++;
		ch++;
	}		
	printf("Length=%d",len);	
}
