#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	int i;
	fp=fopen("getint.docx","w");
	
	  i=1587;
//	  scanf("%d",&i);
	  putw(i,fp);
    
    fclose(fp);
	return 0;
}
