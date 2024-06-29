#include<stdio.h>
int main()
{
	int a[3][3],i,j,add=0,e[i],sum=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{    
		    printf("Enter the vakue 0f a[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
		
	// To print entered matrix
		
		printf("\nEntered Matrix a= \n");
		
		for(i=0;i<3;i++)
    	{
	    	for(j=0;j<3;j++)
		   {    
		     printf("%d  ",a[i][j]);
		  }
		  printf("\n");
	   }
	// Adding row elements 
	
		for(i=0;i<3;i++)
       { 
           add=0;
      	    for(j=0;j<3;j++)
	    	{
			  add=a[j][i]+add;
	    	}
			printf("\n On adding rows r[%d]= %d\n",i+1,add);
    	}   
    	
	return 0;
}
