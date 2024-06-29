// To print array elements representing array index numbers

#include<stdio.h>

int main()
{
 int i,n;
 float a[100];

 printf("Enter size of array: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter %d element of array: ",i+1);
  scanf("%f",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   printf("Number entered in array:a[%d]=%.2f\n ",i,a[i]);
  }
  return 0;
 }
