// 1D Array printing run time values

#include<stdio.h>
 int main()
 {
 	int i,a[5];
 	
	 for(i=0;i<5;i++)
	 {
	 	printf("Enter value for element a[%d]: ",i+1);
	 	scanf("%d",&a[i]);
	 }
	 
	  for(i=0;i<5;i++)
	 {
	 
	 	printf("%d\n",a[i]);
	 }
	 return 0;
 }
