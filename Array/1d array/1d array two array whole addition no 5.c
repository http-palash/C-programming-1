// TO add elements of whole array

#include <stdio.h>
 int main()
{
    int a[10],b[10],n,i,sum=0;
    
    printf("Enter the size of both array: ");
    scanf("%d",&n);
    
    // to enter values in array elements 
    
    for(i=0;i<n;i++)
    {
    	printf("Enter the value of a[%d]=  ",i+1);
    	scanf("%d",&a[i]);
    	printf("Enter the value of b[%d]=  ",i+1);
    	scanf("%d",&b[i]);
	}
	   	 printf("\n Entered array: ");
	   for(i=0;i<n;i++)
	   {
	    printf(" \n a[%d]=%d \t b[%d]=%d \n",i+1,a[i],i+1,b[i]);	   	
	   }
	
	// to add entered array's

	 
	 for(i=0;i<n;i++)
	 {
	 	sum=a[i]+b[i]+sum;
	 }
	 
	 // to printf sum
	 
	   printf("\n Sum=%d",sum);
	   
	return 0;
}
