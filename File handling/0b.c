// to read file in read mode	

#include<stdio.h>
int main()
{
	FILE *fp;
	char str[4];
	
	fp=fopen("Readfile2.txt","r+");
	
    fputc('o',fp);
    fputs("Palash",fp);
    fputs("Vajpayee",fp);
	
	fclose(fp);
	return 0;
}
