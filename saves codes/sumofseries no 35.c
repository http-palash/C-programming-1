#include <stdio.h>
 int main()
 {
 	int n,rem,sum=0;
   printf("Enter a no series: ");	
   scanf("%d",&n);
   
   while(n>0)
   {
   	 rem=n%10;
   	 sum=sum+rem;
   	 n=n/10;
   }
   printf("Sum of no is :%d ",sum);
   return 0;
 }
