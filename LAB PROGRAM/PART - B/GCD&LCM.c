/*
// Calculate GCD (HCF) of Three Numbers using Function.

#include<stdio.h>
#include<stdlib.h>
int gcd(int m, int n)
{
	int rem;
	while(n != 0)
    {
        rem = m % n;
        m = n;
        n = rem;
    }
	return(m);
}
void main()
{
	int num1, num2, num3, gcd1, gcd2;
	printf("Enter 1st positive integer : ");
    scanf("%d", &num1);
    printf("Enter 2nd positive integer : ");
    scanf("%d", &num2);
    printf("Enter 3rd positive integer : ");
    scanf("%d", &num3);
	if(num1==0 && num2==0 && num3==0)
    {
        printf("\nInvalid number ! ");
        exit(0);
    }
	gcd1 = gcd(num1, num2);
    gcd2 = gcd(num3, gcd1);
	printf("\nGCD of [ %d, %d, %d ] is : [ %d ]\n", num1, num2, num3, gcd2);
}
*/

/*


// Calculate HCF.

#include<stdio.h>
#include<conio.h>
int HCF(int a, int b, int c)
{
	int i, hcf = 1;
    for(i = 2; i <= a && i <= b && i <= c;)
    {
		if(a % i == 0 && b % i == 0 && c % i == 0)
        {
            hcf *= i;
            a /= i;
            b /= i;
            c /= i;
        }
        else
			i++;
    }
    return hcf;  
}
void main()
{
	int a, b, c, yes;
	start:
    printf("Enter three numbers :- \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("HCF = %d", HCF(a, b, c));
    printf("\nAgain Calculate (1) :- ");
    scanf("%d", &yes);
    if(yes == 1)
    goto start;
}



*/

// Calculate LCM.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c, L, yes;
	start:
    printf("Enter three numbers :- \n");
    scanf("%d %d %d", &a, &b, &c);
    for(L = 1; L <= a * b * c; L++)
	if(L % a == 0 && L % b == 0 && L % c == 0)
	break;
	printf("LCM is %d", L);
	printf("\nAgain calculate (1) :- ");
    scanf("%d", &yes);
    if(yes == 1)
    goto start;
}

