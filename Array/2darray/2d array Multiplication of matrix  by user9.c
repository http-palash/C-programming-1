// 2-D Array Multiplication of any kind of matrix

#include<stdio.h>
void t();
int main()
{
	int m,n,p,q,i,j,k,b[10][10],a[10][10],c[10][10];

	printf("Enter row and column of 1st Matrix: ");
	scanf("%d%d",&m,&n);

    printf("Enter row and column of 1st Matrix: ");
	scanf("%d%d",&p,&q);

     	
	if(n==p)
	{
	    printf("Lets enter elements of First matrix.....\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				 printf("Enter the value for element a[%d][%d]=",i+1,j+1);
			     scanf("%d",&a[i][j]);
			}
		}
		printf("Lets enter elements of Second matrix.....\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				 printf("Enter the value for element b[%d][%d]=",i+1,j+1);
			     scanf("%d",&b[i][j]);
			}
		}
       
	   printf("The two matrix you have entered: ");
	   
	   printf("Matrix a=\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			     printf("%d",a[i][j]);
			}
			printf("\n");
		}
		printf("Matrix b=\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
		         printf("%d",b[i][j]);
			}
			printf("\n");
		}
		
	   printf("On multiply both the matrices: \n");
				
		for(i=0;i<m;i++)
		{  
			for(j=0;j<q;j++)
	
			{  
					c[i][j]=0;
		       for(k=0;k<n;k++)
		       {
		       	  c[i][j]=c[i][j]+a[i][k]*b[k][j];
			   }
			}
		}
		
			for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
		         printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	printf("Calling\n");
return 0;
}
	
void t()
{
    int arr1[10][10],arr2[10][10],arr3[10][10];
    int i,j,k,m,n,p,q;
    	printf("Enter row and column of 1st Matrix: ");
	scanf("%d%d",&m,&n);

    printf("Enter row and column of 1st Matrix: ");
	scanf("%d%d",&p,&q);

     	
	if(n==p)
	{
	// To take values for matrix 1st   
	 for(i=0;i<m;i++)
     {
	  for(j=0;j<n;j++)
	   {
		 printf("Enter value for a[%d][%d]= ",i+1,j+1);
	     scanf("%d",&arr1[i][j]);
       }
     }
    // To take values for matrix 2nd  
     for(i=0;i<p;i++)
     {
	   for(j=0;j<q;j++)
	   {
		 printf("Enter value for b[%d][%d]= ",i+1,j+1);
	     scanf("%d",&arr2[i][j]);
       }
     }
     // To print entered matrix
     printf("\nEntered Matrix a:\n");
     
	 for(i=0;i<m;i++)
     {
	    for(j=0;j<n;j++)
	    {
	      printf("%d ",arr1[i][j]);
	    }
	     printf("\n");
     }
     printf("Entered Matrix b:\n");
        for(i=0;i<p;i++)
      {
	    for(j=0;j<q;j++)
	  {
		printf("%d ",arr2[i][j]);
	  }
	    printf("\n");
     }
     printf("\nMultiplication of these both matrices:\n");
     //  To multiply 
	for(i=0;i<m;i++)
	{
        for(j=0;j<q;j++)
      	{ 
      	  arr3[i][j]=0;
      	  for(k=0;k<n;k++)
      	  {
            arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
          }
		}
	}
	printf("\nOn Multiplying both Matrices:\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d  ",arr3[i][j]);
		}
		printf("\n");
  	}
  }
  else
	{
	    printf("Multiplication is not possible");
	}
}
