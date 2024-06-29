// 1D Array Merging 

#include <stdio.h>
 int main()
{
    int a[10],b[10],c[10],n,i,j;
    
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
	
	// to print entered arrays
	
	   printf("\n Entered array: ");
	   for(i=0;i<n;i++)
	   {
	    printf(" \n a[%d]=%d \t b[%d]=%d \n",i+1,a[i],i+1,b[i]);	   	
	   }
	// to merge array
	
	   for(i=0;i<n;i++)
      {
    	c[i]=a[i];
	  }
	    
	    j=0;
	   for(i=n;i<10;i++)
      {
	    	c[i]=b[j];
	 	    j++;
	   }
	
	// To print merged array 
	
	printf("\n Final array: \n");
	
		   for(i=0;i<=n*2-1;i++)
		   {
		   	
		   	printf("c[%d]=%d\n",i+1,c[i]);
		   }
	
	return 0;
}
	
