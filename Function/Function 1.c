// Addition program using function 
#include<stdio.h>
// Function declaration
//void add ();
void main ()
{
	void add(void);
// Function calling	
	add();
	printf("\n\n");
}
// Function defination 
void add ()
{
	int a,b,c;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	c=a+b;
	printf("Sum of these two number is:%d ",c);
}
