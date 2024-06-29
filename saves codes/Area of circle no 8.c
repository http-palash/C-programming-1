#include<stdio.h>
float main()
{
	float area,pi=3.14,radius;
	printf("Enter radius of circle: ");
	scanf("%f",&radius);
	area=2*pi*radius;
	printf("Area of circle=%.2f",area);
	return 0;
}
