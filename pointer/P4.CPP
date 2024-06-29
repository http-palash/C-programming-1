// Pointer 4

#include<stdio.h>

int main()
{
	int *pc,c;
	c=5;
	pc=&c;
	*pc=1;
	printf("Value of pointer variable=%d\n",*pc);
	printf("Value of c=%d",c);
	return 0;
}

