// WAP to Insert and Delete an Element at Desired Position in an Array.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50], i, pos, n;
	printf("\nDelete an element at desired position from an array : \n");
	printf("---------------------------------------------------------\n");
	printf("\nInput the size of array : ");
	scanf("%d", &n);
    /* Stored values into the array */
	printf("Input %d elements in the array in ascending order : \n", n);
	for(i = 0; i < n; i++)
	{
		printf("a[%d] - ", i);
		scanf("%d", &a[i]);
	}
	printf("\nInput the position where to delete : ");
	scanf("%d", &pos);
	/*---- locate the position of i in the array ----*/
	i = 0;
	while(i != pos - 1)
	i++;
	/*---- the position of i in the array will be replaced by the value of its right ----*/
	while(i < n)
	{
		a[i] = a[i + 1];
		i++;
	}
	n--;
	printf("\nThe new list is : ");
	for(i = 0; i < n; i++)
	{
		printf("  %d  ", a[i]);
	}
}

