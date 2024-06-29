#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("palash2.txt","w");
	c=getc(fp);
	putc(c,fp);
	fclose(fp);
	return 0;
	
}
