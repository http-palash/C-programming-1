#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	
	// Entering value's matrix
	for(i=0;i<3;i++)
   	{
		for(j=0;j<3;j++)
		{   
		    printf("Enter value for element a[%d][%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	// To Print entered matrix
	printf("Entered array:\n");
		for(i=0;i<3;i++)
   	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	// to add all elements of matrix
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			   	sum=a[i][j]+sum;
			}
		}
	printf("Adddition of whole array elements is:%d",sum);
	return 0;
}
	
