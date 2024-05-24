// WAP to implement string operations such as compare, concatenate, string length. Convince the parameters passing techniques.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int length(char str[100]);
    int compare(char s1[100], char s2[100]);
    void concat(char s1[100], char s2[100]);
	
	int option, result;
	char str[100], s1[100], s2[100];
	do
	{
		printf("1. String length.\n");
		printf("2. String comparision.\n");
		printf("3. String concatenation.\n");
		printf("4. Quit.\n");
		printf("\n");
		
		printf("Enter your choice : ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				printf("Enter string : ");
				scanf("%s", &str);
				result = length(str);
				printf("\nThe length of string = %d \n", result);
				printf("\n");
            break;
            
            case 2:
                printf("Enter 1st string : ");
                scanf("%s", &s1);
                printf("Enter 2nd string : ");
                scanf("%s", &s2);
                result = compare(s1, s2);
                if(result == 0)
                {
                    printf("\nString are equal !\n");
                    printf("\n");
                }
                else
                {
                    printf("\nString are not equal !\n");
                    printf("\n");
                    break;
                }

            case 3:
                printf("\nEnter two string : ");
                scanf("%s %s", s1, s2);
                concat(s1,s2);
                printf("\nResult = %s \n", s1);
                printf("\n");
            break;
            
            case 4:
            	exit(0);
            	break;
        }
    }
	while(option <= 3);
}
	
    int length(char str[100])
    {
        int i = 0;
        while(str[i] != '\0')
            i++;
        return(i);
    }
    int compare(char s1[100], char s2[100])
    {
        int i = 0;
        while (s1[i] != '\0')
        {
            if (s1[i] > s2[i])
                return(1);
            else if(s1[i] < s2[i])
                return(-1);
            i++;
        }
        return 0;
    }
    void concat(char s1[100], char s2[100])
    {
        int i, j;
        i = 0;
        while (s1[i] != '\0')
            i++;
        for (j = 0; s2[j] != '\0'; i++, j++)
            s1[i] = s2[j];
        s1[i] = '\0';
    }

