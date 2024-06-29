// Pointer 3

#include<stdio.h>

int main()
{
	int *pc,c;
	c=5;
	pc=&c;
	c=1;
	printf("Value of c=%d\n",c);
	printf("Value using pointer=%d",*pc);
	printf("\nPointer variable stores address of simple variable \nthat's why this will print latest value on address");
	return 0;
}

