// WAP to Display the Subject Status by Accepting Marks.
#include<stdio.h>
void main()
{
	int s1, s2, s3, s4, s5, total; 
	float percentage;
	printf("Enter Five Marks Subject : \n");
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	total = s1 + s2 + s3 + s4 + s5;
	percentage = total / 5;
	printf("Total Marks : %d \n", total);
	printf("Percentage : %.2f \n", percentage);
	if((percentage >= 85) && (percentage <= 100))
		printf("You are Distint Class ! \n");
	else if(percentage >= 60)
		printf("You are First Class ! \n");
	else if(percentage >= 50)
		printf("Second Class ! \n");
	else if(percentage >= 30)
		printf("Third Class ! \n");
	else
		printf("Your Bad Luck, You are Faild ! \n");	
}
