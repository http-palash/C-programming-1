#include<stdio.h>
 int main()
 {
 	int i,n,a[100],sum=0;
 		printf("Enter size of array: ");
	 	scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	printf("Enter a value for array element a[%d]: ",i+1);
	 	scanf("%d",&a[i]);
	 }
	 // to printf entered array
	 
	 printf("\nEntered array is:\n");

	  
	  for(i=0;i<n;i++)
	 {
	 
	 	printf("%d\n",a[i]);
	 	sum=sum+a[i];
	 }
	 
	 printf("\nAddition of Array elements is : %d ",sum);
	 return 0;
 }
