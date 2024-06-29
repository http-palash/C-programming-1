// Bubble sorting of array

#include<stdio.h>

 int main()
{
 
 int a[10];
 int i,n,j,e;

 printf("Declare size of array: ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  printf("Enter value for array element a[%d]= ",i+1);
  scanf("%d",&a[i]);
  }

//To print Declared array

 printf("Declared array: \n");

 for(i=0;i<n;i++)
   {
    printf("%d\n",a[i]);
   }

// To sort array

 for(i=0;i<5;i++)
 {
  for(j=i;j<=i+1-i;j++)
  {
   if(a[j]>a[j+1])
    {
     e=a[j];
      a[j]=a[j+1];
     a[j+1]=e;
     }
   }
 }
  printf("Sorted array: \n");
  for(i=0;i<n;i++)
   {
    printf("%d\n",a[i]);
   }
   
   return 0;
}
