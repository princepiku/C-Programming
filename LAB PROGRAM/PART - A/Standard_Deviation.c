// WAP to Develop a program using pointers to compute the sum, mean and standard deviation of all elements stored in an array of n real numbers.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a[10], *ptr, mean, sum1 = 0, sum2 = 0, var, std;
    int n, i;
    printf("Enter the number of elements : \n");
    scanf("%d", &n);
    printf("Enter the array of elements : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    ptr = a;
    for(i = 0; i < n; i++)
    {
        sum1 = sum1 + (*ptr);
        ptr++;
    }
    mean = sum1 / n;
    ptr = a;
    for(i = 0; i < n; i++)
    {
        sum2 = sum2 + pow((*ptr - mean), 2);
        ptr++;
    }
    var = sum2 / n;
    std = sqrt(var);
    printf("Sum = %f \n", sum1);
    printf("Mean = %f \n", mean);
    printf("Variance = %f \n", var);
    printf("Standard Deviation = %f", std);
}
