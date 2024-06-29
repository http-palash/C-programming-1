#include<stdio.h>
int main()
{
  float second,minute;
  printf("Enter second's: ");
  scanf("%f",&second);
  minute=second/60;
  printf("Minute=%.2f",minute);
  return 0;
}
