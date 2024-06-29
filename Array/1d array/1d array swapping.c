// swapping of array

#include<stdio.h>

 int main()
{
 
 int a[10];
 int i,n,c;

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

// To swap array

 for(i=0;i<n;i++)
 {
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c; 
 }
  printf("Swapped array: \n");
  for(i=0;i<n;i++)
   {
    printf("%d\n",a[i]);
   }
   
   return 0;
}
