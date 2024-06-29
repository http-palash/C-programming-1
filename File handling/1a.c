// to make file in write mode	

#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("palash.txt","w");
	
	if (fp=fopen("palash.txt","w"))
	{
		printf("%cPlease enter data %c\a",2,2);
	}
	//////////////////////////////////////
	printf("Enter a character: ");
	scanf("%c",&ch);
	///////////////////////////////////////
	putc(ch,fp);
	fclose(fp);
	return 0;

}
