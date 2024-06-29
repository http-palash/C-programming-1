// Arranging of array elements down to up

#include<stdio.h>

int main()
{
 int a[5],b[5],i,j;

 for(i=0;i<5;i++)
 {
  printf("Enter a value for array element a[%d]: ",i+1);
  scanf("%d",&a[i]);
 // printf("Enter a value (2nd array): ");
 // scanf("%d",&b[i]);
 }
 j=4;
  for(i=0;i<5;i++)
  {
   b[i]=a[j];
   j--;
  }
   for(i=0;i<5;i++)
  {
   printf("a=%d\n",b[i]);
  }
 return 0;
}

