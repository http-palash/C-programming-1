//To read 1 string of doc

#include<stdio.h>

FILE *file;
char  ch[200];
int main()
{
   file=fopen("hello.txt","r");

     fscanf(file,"%s",ch);
     
     printf("%s",ch);
    
    fclose(file);
    getch();
}
