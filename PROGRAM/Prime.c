/*

// Prime Number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num, i;
	printf("Enter the number for check prime | ^ : ");
	scanf("%d",&num);
	for(i=2; i<num; i++)
	{
		if(num%i == 0)
		break;
	}
	if(i == num)
	{
		printf("%d is Prime Number.",num);
	}
	else
		printf("%d is not a Prime Number.",num);
}

*/

//Largest Number in Array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, larg = 0;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d the elements of array : \n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	larg = a[0];
	for(i=1; i<n; i++)
	{
		if(larg < a[i])
		larg = a[i];
	}
	printf("Largest element in the array is : %d",larg);	
}
