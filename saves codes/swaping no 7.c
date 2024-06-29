#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter first no : ");
	scanf("%d",&a);
	printf("Enter second no : ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=b-a;
	
	printf("On swapping both no: %d %d",a,b);
	
	return 0;
	
	
}
