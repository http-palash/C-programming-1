// To enter int in fp by assigning

#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	int i;
	fp=fopen("get.txt","w");
	
	  i=1587;
	  putw(i,fp);
    
    fclose(fp);
	return 0;
}
