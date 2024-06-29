// String 16

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char *n;
  clrscr();
  printf("Enter a string: ");
  gets(n);
  strupr(n);
  puts(n);
 getch();
}