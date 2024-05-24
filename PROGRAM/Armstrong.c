//WAP to Print the given Number is Armstrong Number or Not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int sum = 0, temp, rem, num;
	printf("Enter the Number : ");
	scanf("%d", &num);
	temp = num;
	while(temp != 0)
	{
		rem = temp % 10;
		sum = sum + (rem * rem * rem);
		temp = temp / 10;
	}
	if(num == sum)
		printf(" %d is a Armstrong Number", num);
	else
		printf(" %d is not a Armstrong Number", num);
}

//(digit ^ power) here n = 3
/*
Output : 
	123 = Not Armstrong = (1^3(1*1*1) + 2^3(2*2*2) + 3^3(3*3*3))
	153 = Armstrong = (1^3)(1*1*1) + (5^3)(5*5*5) + (3^3)(3*3*3)
*/
