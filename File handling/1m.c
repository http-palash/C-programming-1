// appending in txt file using a

#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[20];
	fp=fopen("get.txt","a");
	
	
    printf("Enter string: ");
	scanf("%s",ch);
	fputs(ch,fp);

    fclose(fp);
	
	return 0;
}	
	
