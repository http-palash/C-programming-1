#include<stdio.h>

 int main()
 
{
 	int a[3][3],i,j;
	 
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{   
	 	    printf("Enter the value of a[%d][%d]= ",i+1,j+1);
	 		scanf("%d",&a[i][j]);    
		 }
	  } 
	 
	  printf("\nEntered array: \n\n"); 
	  
	  
	  for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{   
	 	    printf("Value of a[%d][%d]=%d\n",i+1,j+1,a[i][j]);  
		 }
	  } 
	return 0;
}
