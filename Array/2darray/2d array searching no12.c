#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a[3][3],b[3][3],c[3][3],n;
	int i,j,check=0;
	
	// to enter values is 1st array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value of a[%d][%d]= ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
		

	// To print Entered array
	
	printf("\nEntered matrix a= \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f  ",a[i][j]);
		}
		printf("\n");
	}
	

	// To search elements in given matrix
	
		printf("\nEnter element to search in given matrix: ");
		scanf("%f",&n);
			
		for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
		  if(n==a[i][j])
		  {
		  	printf("\n%.2f element is present in this array",a[i][j]);
		  	exit(0);
		  }
    	}
    	
   }
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  if(n!=a[i][j])
		  {
		  	check=1;
		  }
    	}
    }
    if(check==1)
    {
    	printf("\n%.2f is not present in this array",n);
	}
	return 0;
}
