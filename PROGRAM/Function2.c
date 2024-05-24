#include<stdio.h>
#include<conio.h>
//#define PI 3.14
float AreaOfCircle(float r)
{
	float area;
	area = 3.14 * r * r;
	return area;
}
void main()
{
	float r,circle;
	
   printf("Enter the radious of the circle : ");
   scanf("%f",&r);
   
	circle = AreaOfCircle(r);
	
   printf("Area of the Circle = %.2f",circle);
}
