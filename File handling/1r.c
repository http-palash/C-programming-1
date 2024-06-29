// To count blank in doc
#include<stdio.h>
#include<stdio.h>
int main()
{
   FILE *file;
   char ch[200],str[200];
   int count=0,check;
   
   if(file=fopen("Myfile.txt","r"))
   {
	  while(fscanf(file,"%c",ch)!=EOF)
   	  {
         //printf("%s\n",ch);   //To check
         check=strcmp(ch," ");
 	  	if(check==0)
   	  	{
   	  		count++;
		}
		check=1;
	  }
   }
     printf("\n\aThere are %d blank spaces present in this txt/doc file.....\n\n",count);
	fclose(file);
}
