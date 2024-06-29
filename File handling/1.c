// to read file in write mode	

#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("palash.txt","r");
	
	if(fp=fopen("palash.txt","r"))
	{
		printf("%c  File opened in read mode..  %c  ",2,2);
	}
	else
	{
		printf("File not present.. create file by  write mode..");
		printf("\a");
	}
	fclose(fp);
	return 0;
}
