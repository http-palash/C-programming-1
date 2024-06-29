// String 10

#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  char *n[5][5];
  clrscr();
  for(i=0;i<1;i++)
  {
     printf("Enter string %d: ",i+1);
     for(j=0;j<5;j++)
    {
      scanf("%s",n[i][j]);
    }
  }

  for(i=0;i<5;i++)
  {
    printf("\nString %d= ",i+1);
    for(j=0;j<5;j++)
    {
     printf("%s",n[i][j]);
    }
    printf("\n");
  }
  getch();
}