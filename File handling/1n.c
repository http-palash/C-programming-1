#include<stdio.h>


int main()
{

   FILE *file;
   char  ch;
     
	  file=fopen("hello.txt","r"); 
     
    while((ch=getc(file))!='m')
    {
	    printf("%c",ch);
    }
    fclose(file);
    getch();
}
