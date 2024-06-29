#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,add=0,e[i],sum=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{    
		    printf("Enter the value for element a[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	// To print entered matrix
	
	 printf("\nEntered matrix a:\n");
	    	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{    
		    printf("%d  ",a[i][j]);
		}
	 printf("\n");
	}
	  // To transpose  
	  
	printf("Transpose of a is : \n");
	
	for(i=0;i<3;i++)
    { 
      	for(j=0;j<3;j++)
		{
			printf("%d  ",a[j][i]);
		}
		printf("\n");
   	}
	return 0;
}
