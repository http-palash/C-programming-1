// to read file in read mode	

#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("Readfile.txt","r");
	
	c=fgetc(fp);
	printf("%c",c);
	c=fgetc(fp);
	printf("%c",c);
	c=fgetc(fp);
	printf("%c",c);
    
	fclose(fp);
	return 0;
}
