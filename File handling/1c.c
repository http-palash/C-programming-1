// to enter chars in loop ucing getchar

#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	int i;
	fp=fopen("getcharinfile.txt","w");
	
	
    printf("Enter char: ");
	for(i=0;i<=10;i++)
	{
	 c=getchar();
	 putc(c,fp);
    }

	fclose(fp);
	return 0;
	
}
