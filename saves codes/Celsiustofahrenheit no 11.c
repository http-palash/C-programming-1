#include<stdio.h>
int main()
{
  float celsius,fahrenheit;  
  printf("Enter radius value of celsius: ");
  scanf("%f",&celsius);
  fahrenheit=(celsius*9/5)+32;
  printf("Celsius=%.2f \n Fahrenheit=%.2f",celsius,fahrenheit);
  return 0;
}
