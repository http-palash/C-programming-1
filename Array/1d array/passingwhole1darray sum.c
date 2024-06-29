// Program to calculate the sum of array elements by passing to a function 
#include <stdio.h>
float calculateSum(float age[]);
int main()
{
    float result,age[] = {23.4, 55, 22.6, 3, 40.5, 18};
    // age array is passed to calculateSum()
    calculateSum(age); 
    return 0;
}

float calculateSum(float age[]) 
{
//  for( i = 0; i < 6; ++i)
printf("%f",age);
}
