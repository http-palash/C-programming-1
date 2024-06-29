#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("palash3.txt","a");
	putc(c,fp);
	c=getc(fp);
	fclose(fp);
	return 0;
	
}
