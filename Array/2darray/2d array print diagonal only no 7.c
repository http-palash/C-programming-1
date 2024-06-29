#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0,c=0;
	
	// Entering va+lues in matrix
	for(i=0;i<3;i++)
   	{
		for(j=0;j<3;j++)
		{
			printf("Enter value of a[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
// To print entered matrix 
    	printf("Entered matrix a :\n");
		for(i=0;i<3;i++)
   	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
		//printf only diagonal of given matrix 
		printf("\n Diagonal elements are: \n");
	
		for(i=0;i<3;i++)
   {    c++;
		for(j=0;j<3;j++)
		{ 
		 
		 if(i==j)
	   	{
		 	printf("%d",a[i][j]);
    
          if(c==1)
           {
            printf("\n\t");
           } 
           if(c==2)
          {
	       printf("\n\n\t\t"); 
     	  }
	     }
	   }
   }    
	return 0;
}
