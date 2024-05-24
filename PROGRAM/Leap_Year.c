// Display Leap Year.

#include<stdio.h>
void main()
{
	int year;
	printf("Enter a Year : ");
	scanf("%d",&year);
	
	//to check century year and leap year. ex - 1900 2000 2100
	
	if(year%100==0 && year%400==0)
	printf("Leap Year");
	
	//to checck not a century year and leap year. ex - 1989 1999 2219 2425
	
	else if(year%100!=0 && year%4==0)
	printf("Leap Year");
	
	else
		printf("Not Leap Year");
}
