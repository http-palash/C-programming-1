// writing a char in txt file using putc

#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("get.txt","w");
	
	ch='a';
	putc(ch,fp); 
//	 Write a char to file
    
    fclose(fp);
	return 0;
}
