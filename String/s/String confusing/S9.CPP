// String 9

#include<stdio.h>
#include<conio.h>
int main()
{
  int i;
  char *n[5];
  clrscr();
  printf("Enter a string = ");
  for(i=0;i<5;i++)
  {
    scanf("%c",&n[i]);
  }
  for(i=0;i<5;i++)
  {
   printf("%c",n[i]);
  }
   getch();
   return 0;
}
