#include <stdio.h>

int main()
{
	int n,rev=0,rem,m;
	
	printf("Enter a no : ");
	scanf("%d",&n);
     m=n;
	while(n>0)
     	{   
	     rem=n%10;
		 rev=rev*10+rem;
	     n=n/10;
    	}

	if(rev==m)
	{
	printf("%d is palidrome no",m);
    }
	else
	 printf("%d is ont a palidrome no",m);
	
	return 0;
}
