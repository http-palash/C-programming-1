#include<stdio.h>
float main()
{
	float circumference,pi=3.14,radius;
	printf("Enter radius of circle: ");
	scanf("%f",&radius);
	circumference=pi*radius*radius;
	printf("Circumference of circle=%.2f",circumference);
	return 0;
}
