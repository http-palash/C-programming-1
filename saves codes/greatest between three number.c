#include<stdio.h>
int main()
{
  float n1,n2,n3;
  printf("Enter 1st number: ");
  scanf("%f",&n1);
  printf("Enter 2nd number: ");
  scanf("%f",&n2);  
  printf("Enter 3rd number: ");
  scanf("%f",&n3);  
  if(n1>n2)
  {
   printf("%f is greatest number",n1);
  }
   else 
  if (n2>n3)
  printf("%f is greatest number",n2);
  else
  printf("%d is greatest number",n3);
  return 0;
}
