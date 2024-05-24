//Write a Program traversing operation.
#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20]={2,4,6,8,9,10,12,15,18};
   int i,n;

   printf("Enter the array of elements : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("Array[%d] = %d \n",i,a[i]);
   }
}
