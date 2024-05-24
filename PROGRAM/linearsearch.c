#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,search,a[20],found=0;
   printf("\n Enter size of array:");
   scanf("%d",&n);
   printf("\n Enter %d elements:",n);
   for(i=0;i<n;i++)
   {
       scanf("\n%d",&a[i]);
   }
   printf("\n Enter element to search:");
   scanf("%d",&search);
   for(i=0;i<n;i++)
   {
       if(search==a[i])
       {
          printf("Element %d is found at %d position",search,i+1);
          found=1;
          break;
       }
   }
   if(found==0)
   {
      printf("\n Element is not found");
   }
   getch();
}
