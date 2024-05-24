// WAP to find the Simple Interest.

#include<stdio.h>
#include<conio.h>
void main()
{
	float amount, sim, intr, period;
    printf(" Enter Principal Amount : ");
    scanf("%f", &amount);
    printf(" Enter Rate of Interest : ");
    scanf("%f", &intr);
    printf(" Enter Period of Time : ");
    scanf("%f", &period);
    sim = (amount * intr * period) / 100;
    printf("\n  Simple Interest : %.2f", sim);
}
