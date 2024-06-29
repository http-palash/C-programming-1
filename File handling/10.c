#include<stdio.h>

FILE *file;
char  ch;
int main()
{
   file=fopen("hello.txt","w");


    printf("Enter Data And use CTRL+Z Enter CTRL+Z to close file....\a\n\n");
    while((ch=getchar())!=EOF)
    {

//	    printf("%c",ch); //  To check 
        putc(ch,file);
    }
    fclose(file);
    getch();
}
