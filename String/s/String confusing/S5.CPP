// String 6

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,c;
  char *n;
  clrscr();
  printf("Enter a string: ");
  gets(n);
  c=strlen(n);
  for(i=0;i<c;i++)
  {
   scanf("%c",&n[i]);
  }
  for(i=0;i<c;i++)
  {
   printf("%c",n[i]);
  }
  getch();
}
