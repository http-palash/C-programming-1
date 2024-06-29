// String 18

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char *m,*n,check=0;
  int l,i,j;
  clrscr();
  printf("Enter a string: ");
  gets(m);
  strcpy(n,m);
  strrev(n);
  puts(n);
  l=strlen(n);

  for(i=0;i<l;i++)
  {
   if(m[i]!=n[i])
   {
    check=1;
   }
  }
  if(check==1)
  {
   printf("This string is not palidrome");
  }
  else
  {
   printf("This string is palidrome");
  }
 getch();
}