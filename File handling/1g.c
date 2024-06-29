// To enter string in fp using scanf

#include<stdio.h>
int main()
{
	FILE *fp;
	char c[20];
	fp=fopen("get.txt","w");
	
	  printf("Enter string: ");
	  scanf("%s",c);
	  fputs(c,fp);
    
    fclose(fp);
	return 0;
}
