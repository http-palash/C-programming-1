// Two array addition 

#include <stdio.h>
 int main()
{
    int a[10],b[10],n,i,c[10];
    
    printf("Enter the size of both array: ");
    scanf("%d",&n);
    
    // To enter values in array elements 
    
    for(i=0;i<n;i++)
    {
    	printf("Enter the value of a[%d]=  ",i+1);
    	scanf("%d",&a[i]);
    	printf("Enter the value of b[%d]=  ",i+1);
    	scanf("%d",&b[i]);
	}
	// To print Entered array 
	   	
	   printf("\n Entered array: ");
        
	   printf("\nEntered array a= \n");	  
	   for(i=0;i<n;i++)
	   {
	    printf(" \n a[%d]=%d \n",i+1,a[i]);	   	
	   }
	   
	   printf("\nEntered array b= \n");	  
	      for(i=0;i<n;i++)
	   {
	    printf(" \n b[%d]=%d \n",i+1,b[i]);	   	
	   }
	// to add entered array's
	 printf("\n On Addition of these arrays: ");
	 
	 for(i=0;i<n;i++)
	 {
	 	c[i]=a[i]+b[i];
	 }
	 
	 // to printf thrid array
	 
	 	 
	 for(i=0;i<n;i++)
	 {
	   printf("\n Final Array=c[%d]=%d \n",i+1,c[i]);
	 }
	 
	return 0;
}
