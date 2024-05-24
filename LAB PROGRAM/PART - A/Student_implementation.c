// WAP to implement structures to read, write and compute average marks and the students scoring above and below the average marks for a class of N students.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct mark_sheet
{
    char name[20];
    int rollno;
    int marks[10];
    float total;
    float average;
    char rem[10];
    char cl[20];
}
students[100];

void main()
{
	int a, b, n, flag = 1;
    char ch;
    printf("How many students wants to enter : ");      
    scanf("%d", &n);
    for(a = 1; a <= n; ++a)
	{
        printf("\t\n--- Enter the details of %d students ---\n", n-a+1);
        printf("\nEnter student  %d  Name : ", a);
        scanf("%s", &students[a].name);
        printf("\nEnter student %d Roll Number : ", a);
        scanf("%d", &students[a].rollno);
        students[a].total = 0;
        for(b = 1; b <= 5; ++b)
		{
	        printf("\nEnter the mark of subject : %d -> ", b);
	        scanf("%d", &students[a].marks[b]);
	        students[a].total += students[a].marks[b];
	        if(students[a].marks[b] < 40)
	        flag = 0;
    	}
    	students[a].average = (students[a].total) / 5;
    	if((students[a].average >= 75) && (flag == 1))
    	strcpy(students[a].cl, "Distinction");
    	else if((students[a].average >= 60) && (flag == 1))
        strcpy(students[a].cl, "First Class");
        else if((students[a].average >= 50) && (flag == 1))
        strcpy(students[a].cl, "Second Class");
    	else if((students[a].average >= 40) && (flag == 1))
        strcpy(students[a].cl, "Third Class");
    	if(flag == 1)
        	strcpy(students[a].rem, "Pass");
        	else
        		strcpy(students[a].rem, "Fail");
        		flag = 1;
	}
    for(a = 1; a <= n; ++a)
	{
		printf("\n\n\t\t\t\tMark Sheet\n");
		printf("\nName of Student : %s", students[a].name);
		printf("\t\t\t\t Roll No : %d", students[a].rollno);
		printf("\n------------------------------------------------------------------------");
		for(b = 1; b <= 5; b++)
		{
            printf("\n\n\t\t\tSubject %d \t : \t %d", b, students[a].marks[b]);
        }
        printf("\n------------------------------------------------------------------------\n");
        printf("\n\n Totl Marks : %.2f", students[a].total);
		printf("\t\t\t\t Average Marks : %.2f", students[a].average);
        printf("\n\n Class : %s", students[a].cl);
        printf("\t\t\t\t\t Status : %s", students[a].rem);
        printf("\n\n\n\t\t\t\t Press Y for continue . . . . .");
        ch = getche();
        if((ch == "y") || (ch == "Y"))
        continue;       
    } 
}

