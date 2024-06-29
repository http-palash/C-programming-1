// To find minimum/smallest number in array

#include<stdio.h>

int main()
{
  int i,n;
  float a[100];

 printf("Enter size of array between 1 to 100: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter the value a[%d]: ",i+1);
  scanf("%f",&a[i]);
 }
 //To find min/smallest no

 for(i=1;i<n;i++)
 {
  if(a[0]>a[i])
   a[0]=a[i];
  }
   printf("\nSmallest/Minimium no = %.2f",a[0]);
 
   return 0;
 }
