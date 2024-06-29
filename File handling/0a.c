// to read file in read mode	

#include<stdio.h>
int main()
{
	FILE *fp;
	char str[4];
	
	fp=fopen("Readfile1.txt","w");
	
//	fgets(str,3,fp);
//	printf("The string is: %s",str);

    fputc('o',fp);
    fputs("Palash",fp);
	
	fclose(fp);
	return 0;
}
