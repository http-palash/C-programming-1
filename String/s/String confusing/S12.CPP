// String 12

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char *n,*m;
  int a;
  clrscr();
  printf("Enter a string: ");
  gets(n);
  strcpy(m,n);
  puts(m);
  getch();
}