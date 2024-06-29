#include<stdio.h>
int main()
{
	FILE *fp;
	char c;

	fp=fopen("getcharinfilebreak.txt","w");
		
    printf("Enter char: ");
	while(1)
	{
	
	 c=getchar();
	   
	   if(c=='q')
	   {
	   	break;
	   }
	   putc(c,fp);
	      fclose(fp);
    }
	return 0;
}
