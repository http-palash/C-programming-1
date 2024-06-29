// read string using getc

#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("get.txt","r");
	
	ch=fgetc(fp);
//	reads char through txt file
	printf("%c",ch);
	ch=fgetc(fp);
	printf("%c",ch);
	ch=fgetc(fp);
	printf("%c",ch);
	
    
    fclose(fp);
	return 0;
}
