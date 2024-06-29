// 1D whole array addition 

#include<stdio.h> 

int main ()
{
	int a[5],i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the value of a[%d]= ",i+1);
		scanf("%d",&a[i]);
	}
   // To sum elements
   
   	for(i=0;i<5;i++)
	{
	  sum=sum+a[i];
	} 
   // To print Entered array 
   
   printf("\nSum of array elements is: %d ",sum);

	
}
