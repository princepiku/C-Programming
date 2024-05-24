// WAP to Roots of Quadratic Equation.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a, b, c;
	float root1, root2;
	float determinant, real, imaginary;
	printf("Enter the Co-efficient of Quadratic Equation a , b and c : ");
	scanf("%f %f %f", &a, &b, &c);
	determinant = b * b - 4 * a * c;
	if(a == 0 && b == 0)
	{
		printf("Invalid Inputs !\n");
	}
	else if(a == 0)
	{
		printf("Linear Equation\n");
		root1 = -c / b;
		printf("Root = %.2f \n", root1);
	}
	else if(determinant == 0)
	{
		printf("Roots are Real and Equal\n");
		root1 = - b / (2 * a);
		root2 = - b / (2 * a);
		printf("Root1 = %.2f \n Root2 = %.2f", root1, root2);
	}
	else if(determinant > 0)
	{
		printf("Roots are Real and Distinct\n");
		root1 = (-b+(sqrt(fabs(determinant)))) / (2 * a);
		root2 = (-b-(sqrt(fabs(determinant)))) / (2 * a);
		printf("Root1 = %.2f \n Root2 = %.2f", root1, root2);
	}
	else
	{
		printf("Roots are Imaginary\n");
		real = - b / (2 * a);
		imaginary = sqrt(fabs(determinant)) / (2 * a);
		printf("Root1 = %.2f + i -> %.2f \n", real, imaginary);
		printf("Root2 = %.2f - i -> %.2f \n", real, imaginary);
	}
}

