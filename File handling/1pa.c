//To read all string / whole doc

#include<stdio.h>

int main()
{
	 FILE *file;
     char  ch[200];
     
	 file=fopen("hello.txt","r");
    
	 while(fscanf(file,"%s",ch)!=EOF)
    {
     printf("%s\n",ch);
    }
    
    fclose(file);
    getch();
}
