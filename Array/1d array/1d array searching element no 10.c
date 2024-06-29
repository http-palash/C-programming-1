// To search array element is present in array or not

#include<stdio.h>
int main()
{
 int i,n,check=0;
 float a[100],s; 

 printf("Enter size of array : ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
  {
   printf("Enter value for a[%d]: ",i+1);
   scanf("%f",&a[i]);
  }
 // To show declared array
 for(i=0;i<n;i++)
 {
  printf("a[%d]=%.2f\n",i+1,a[i]);
 }
 // To search array element
 printf("\nEnter a value to search in array: \n");
 scanf("%f",&s);
  for(i=0;i<n;i++)
    {
     if(s==a[i])
      {
     	check=1;
      }
    }
     if(check==0)
     {
      printf("\n%.2f value is not found",s);
     }
     else
     {
       printf("%.2f value is present in this array",s);	
	 }

    return 0 ; 
}
