#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],final=0,i,j,k,sum=0;
	
	// to enter values is 1st array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value of a[%d][%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
		
	// to enter values is 2nd array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value of b[%d][%d]= ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	// To print Entered array
	printf("Entered matrix a: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
    printf("Entered matrix b: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	// To multiply matrices
	
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
      	{ 
      	  c[i][j]=0;
      	  for(k=0;k<3;k++)
      	  {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
          }
		}
	}
	printf("\nOn Multiplying both Matrices:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}

	return 0;
}

