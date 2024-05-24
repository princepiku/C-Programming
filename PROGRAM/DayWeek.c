//		04/11/1998 (not a leap year)

//		magic number month array

//		month -> { 0,3,2,5,0,3,5,1,4,6,2,4 }

//		day -> 0-6: { sun,mon,tue,wed,thurs,fri,sat }

//		centruy year avlue  -> 1600-1699 = 6; 1700-1799 = 4; 1800-1899 = 2; 1900-1999 = 0; 2000-2099 = 6.........

//		last 2 digits of the year : 98

//		divide by 4 : 24

//		take the date : 14

//		take month value : 5

//		take century year value : 0

//		sum : 141

//		divide sum by 7 : 141 % 7 = 1


#include<stdio.h>
void main()
{
	static int t[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int d,m,year,i,s=0;
	//printf("Enter Date/Month/Year : ");
	scanf("%d %d %d",&d,&m,&year);
	if((year%400==0) || ((year%4==0) && (year%100!=0)))
	t[1]=29;
	for(i=0;i<m-1;i++)		//5th june
	s=s+t[i];
	s=s+(d+year+(year/4)-2);
	//s=120+(4+2022+(2022/4)-2);
	s=s%7;
	switch(s)			//switch
	{
		case 0:
			printf("Sunday");
			break;
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		default :
			printf("Invalid Day !");
			break;
	}
}
