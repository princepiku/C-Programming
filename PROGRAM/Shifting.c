// Shifting Operation.(Left Shifting & Right Shifting)
#include <stdio.h>
void main()
{
	int num = 212, i;
	for(i = 0; i <= 2; ++i)
	printf("Right Shifting by %d : %d \n",num >> i);
	printf("\n");
	for(i = 0; i <= 2; ++i)
	printf("Left Shifting by %d : %d \n",num << i);	
}

/*

Left Shifting -> Number * 2 power 1 , Number * 2 power 2
Right Shifting -> Number / 2 power 1 , Number / 2 power 2

*/
