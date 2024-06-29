#include<stdio.h>
int main()
{
	FILE *fp;
	char c='H';
	fp=fopen("palash2.txt","w");
	putc(c,fp);
	c=getc(fp);
	fclose(fp);
	return 0;
	
}
