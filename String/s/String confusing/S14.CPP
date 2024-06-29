// String 14

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
  printf("Enter a string: ");
  gets(m);
  a=strcmp(n,m);
  if(a==0)
   {
    printf("Same\n");
   }
  else
  if(a>0)
   {
    printf("String 1st is greater then 2nd");
   }
   else
   if(a<0)
    {
     printf("String 2nd is greater then 1st");
    }
 getch();
}