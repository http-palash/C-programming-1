// String 11

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char *n;
 int a;
 printf("Enter a string: ");
 gets(n);
 a=strlen(n);
 printf("Lenght=%d",a);
 getch();
}