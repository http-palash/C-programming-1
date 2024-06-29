#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,c[3][3];
	
	//Entering values in matrix 1
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{    
		     printf("Enter the value of a[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
		//Entering values in matrix 2
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
    	{
   		  printf("Enter the value of b[%d][%d]=",i+1,j+1);
		  scanf("%d",&b[i][j]);
		}
	 }
	// Adittion of both matrix
	
		for(i=0;i<3;i++)
      {   
        
      	for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
				
	   	}
	   	
      }
		
//Printing values of matrix 3
  printf("\nOn adding columns: \n");	
   
   for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
   {
   	printf("c[%d][%d]=a[%d][%d]+b[%d][%d]=%d\n",i+1,j+1,i+1,j+1,i+1,j+1,c[i][j]);
	}
  } 
	
 return 0;
} 

