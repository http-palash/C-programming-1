// S1 Strlen function

#include <stdio.h>
#include <string.h>
#include <conio.h>
 int main ()
{
	char *n;
	int a;
	
	printf("Enter a string: ");
	gets(n);
	a=strlen(n);
	printf("Length of string is %d",a);
    return 0;
}
