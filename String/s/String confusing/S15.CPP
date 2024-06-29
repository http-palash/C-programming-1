// String 15

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char *n;
  clrscr();
  printf("Enter a string: ");
  gets(n);
  strlwr(n);
  puts(n);
 getch();
}