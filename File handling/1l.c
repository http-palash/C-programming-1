// writing int in txt file using putw

#include<stdio.h>
int main()
{
	FILE *fp;
	int ch;
	fp=fopen("get.txt","r");
	
//	reads char through txt file
	ch=getw(fp);
	printf("%d",ch);
    fclose(fp);
	
	return 0;
}	
	
