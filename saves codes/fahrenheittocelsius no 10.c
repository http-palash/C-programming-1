#include<stdio.h>
float main()
{
	float celsius,fahrenheit;
	printf("Enter radius value of faherheit: ");
	scanf("%f",&fahrenheit);

	
	celsius=((fahrenheit-32)*5)/9;
	


	printf("Fahernheit=%.2f \n Celsius=%.2f",fahrenheit,celsius);
	return 0;
}
