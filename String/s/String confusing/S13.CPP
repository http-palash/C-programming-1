// String 13

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char *n,*m;
  int a;
  clrscr();
  printf("Enter a string: ");
  gets(m);
  printf("Enter a string: ");
  gets(n);
  strcat(m,n);
  puts(m);
  getch();
}