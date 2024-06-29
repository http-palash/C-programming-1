#include<stdio.h>
 int main()
{
	float a[3][3],b[3][3],c[3][3];
	int i,j;
	// To enter value in 1st array
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
		 a1:printf("Enter value of a[%d][%d]=",i+1,j+1);
	   	 scanf("%f",&a[i][j]);
	   	 if(a[i][j]==0)
	   	 {
	   	 	printf("Please do no enter 0 \n");
	    	 goto a1;
	    }
	  }
	}
	// To enter value in 2nd matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 printf("Entered value of b[%d][%d]=",i+1,j+1);
		 scanf("%f",&b[i][j]);
		}
	}
	// to print entered matrices
	
	 printf("Entered matrix a: \n\n");
	 for (i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%.2f  ",a[i][j]);
		}
		printf("\n");
	 }
	 printf("Entered matrix b: \n\n");
	 	 for (i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%.2f  ",b[i][j]);
		}
		printf("\n");
	 }
	 
	// to divide both matrices
		 for (i=0;i<3;i++)
	   { 
	 	for(j=0;j<3;j++)
	 	{
	 		c[i][j]=a[i][j]/b[i][j];
		 }
       }
 
	// To print final matrix	 
		 
	printf("On dividing both the matrices: \n\n");
		 	 	 
	for (i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%.2f  ",c[i][j]);
		 }
		 printf("\n");
	 }  
    return 0;
}
