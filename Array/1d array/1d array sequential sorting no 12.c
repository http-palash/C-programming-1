// Sorting of array sequential

#include<stdio.h>

int  main()
{
 int i,j,n,e=0;
 int a[10];
 
 // To declare size of array
 printf("Declare size of array: ");
 scanf("%d",&n);
 // To enter values in array
 for(i=0;i<n;i++)
 {
  printf("Enter value for a[%d]: ",i+1);
  scanf("%d",&a[i]);
 }
 // To show declared array
  printf("Declared array: \n");
  for(i=0;i<n;i++)
  {
   printf("%d\n",a[i]);
  }
 // To sort

    for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
	if(a[i]>a[j])
	 {
	 e=a[i];
	 a[i]=a[j];
	 a[j]=e;
	 }
       }
    }
// To show sorted array

  printf("Sorted array: \n");
  for(i=0;i<n;i++)
   {
    printf("%d\n",a[i]);
   }
 return 0;
}
 
