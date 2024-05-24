// Calender.....

#include<stdio.h>
#include<conio.h>

int getmonth(int, int);

void main()
{
  int yr, x, y, z, mon;
  printf("Enter an year to show the calendar : " );
  scanf("%d", &yr);
  x = ((yr-1)%400) / 100;
  y = (((yr-1)%400) % 100) / 4;
  z = (((yr-1)%400) % 100) - (((yr-1)%400) % 100) / 4;
  mon = (x*5+y*2+z+1) % 7;
                
  printf("\n\nJanuary\n\n");
  mon = getmonth(31,mon);
  printf("\n\n\n Press any key to display next month . . . . .");
  getche();

  printf("\n\nFebruary\n\n");
  if((yr)%4==0)
    mon = getmonth(29,mon);
  else
    mon = getmonth(28,mon);
    printf("\n\n\n Press any key to display next month . . . . .");
    getche();

    printf("\n\nMarch\n\n");
    mon = getmonth(31,mon);
    printf("\n\n\n Press any key to display next month . . . . .");
    getche();

    printf("\n\nApril\n\n");
    mon = getmonth(30,mon);
    printf("\n\n\n Press any key to display next month . . . . .");
    getche();

    printf("\n\nMay\n\n");
    mon = getmonth(31,mon);
    printf("\n\n\n Press any key to display next month . . . . .");
    getche();

    printf("\n\nJune\n\n");
    mon = getmonth(30,mon);
    printf("\n\n\n Press any key to display next month . . . . .");
    getche();
                  
    printf("\n\nJuly\n\n");
    mon = getmonth(31,mon);
    printf("\n\n\n Press any key to display next month . . . . .");
    getche();
                
    printf("\n\nAugust\n\n");
    mon = getmonth(31,mon);
    printf("\n\n\n Press any key to display next month . . . . .");
    getche();
    
    printf("\n\nSeptember\n\n");
    mon = getmonth(30,mon);
    printf("\n\n\n Press any key to display next month . . . . .");
    getche();
                   
    printf("\n\nOctober\n\n");
    mon = getmonth(31,mon);
    printf("\n\n\n Press any key to display next month . . . . .");
    getche();
                   
    printf("\n\nNovember\n\n");
    mon = getmonth(30,mon);
    printf("\n\n\n Press any key to display next month . . . . .");
    getche();
                   
    printf("\n\nDecember\n\n");
    mon = getmonth(31,mon);
}

int getmonth(int p, int q)
{
  int a, b, c;
  printf("   Sun   Mon   Tue   Wed   Thu   Fri   Sat   \n");
  for(a = 0; a <= q; a++)
  if(a >= q)
  {
    for(b = 1; b <= p; b++)
    {
      if((a % 7) == 0)
      printf("\n");
      printf("%6d", b);
      a++;
    }
  }
  else
    printf(" ");
    c = (p + q) % 7;
    return(c);
}

