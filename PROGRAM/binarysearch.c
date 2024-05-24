#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n,f,l,m,search,a[50],found=0;
     printf("\nEnter size of array:");
     scanf("%d",&n);
     printf("\n Enter %d sorted elements:",n);
     for(i=0;i<n;i++)
     {
      scanf("\n%d",&a[i]);
     }
     printf("\nEnter element to search:");
     scanf("%d",&search);
     f=0;
     l=n-1;
     m=(f+l)/2;
     while(f<=l)
     {
          if(search<a[m])
          {
             l=m-1;
             m=(f+l)/2;
          }
          else if(search==a[m])
          {
              printf("\nElement found at %d position",m+1);
              found=1;
              break;
          }
          else
          {
              f=m+1;
              m=(f+l)/2;
          }
     }
     if(f>l)
     {
        printf("\n Search Unsuccessful");
     }
     getch();
}
