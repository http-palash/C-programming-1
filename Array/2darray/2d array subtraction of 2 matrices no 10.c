#include<stdio.h>
 int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	
	// To enter value in 1st array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 printf("Enter value of a[%d][%d]=",i+1,j+1);
	   	 scanf("%d",&a[i][j]);
		}
	}
	// To enter value in 2nd matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 printf("Entered value of b[%d][%d]=",i+1,j+1);
		 scanf("%d",&b[i][j]);
		}
	}
	// to print entered matrices
	
	 printf("Entered matrix a: \n");
	 for (i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%d  ",a[i][j]);
		}
		printf("\n");
	 }
	 printf("Entered matrix b: \n");
	 	 for (i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%d  ",b[i][j]);
		}
		printf("\n");
	 }
	 
	// to subtract both matrices
		 for (i=0;i<3;i++)
	   { 
	 	for(j=0;j<3;j++)
	 	{
	 		c[i][j]=a[i][j]-b[i][j];
		 }
       }
 
	// To print subtracted matrix	 
		 
	printf("On subtracting both the matrices: \n");
		 	 	 
	for (i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%d  ",c[i][j]);
		 }
		 printf("\n");
	 }  
 return 0;
}
