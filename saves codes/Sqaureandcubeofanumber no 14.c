#include<stdio.h>
int main()
{
  float square,cube,num;
  printf("Enter a number: ");
  scanf("%f",&num);
  square=num*num;
  cube=square*num;
  
  printf("square:%.2f \n cube=%.2f",square,cube);
  return 0;
}
