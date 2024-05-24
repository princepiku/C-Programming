#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,t,a[20],n;
    printf("\n Enter size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\nBefore sorting:");
    for(i=0;i<n;i++)
    {
       printf("\t%d",a[i]);
    }
    printf("\n Elements after swapping");
    for(i=1;i<n;i++)
    {
         t=a[i];
         for(j=i-1;((j>=0)&&(t<a[j]));j--)
         {
            a[j+1]=a[j];
         }
         a[j+1]=t;
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();

}
