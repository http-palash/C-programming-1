// to make file in write mode	

#include<stdio.h>
int main()
{
	FILE *fp;
	char ch='abc';
	fp=fopen("palash.txt","w");

	putc(ch,fp);
	
	fclose(fp);
	return 0;

}
