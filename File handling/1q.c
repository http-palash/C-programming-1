// To count cahr or string in doc
#include<stdio.h>
#include<string.h>
int main()
{
	
   FILE *file;
   char ch[200],str[200];
   int check,count=0;
   
   if(file=fopen("Myfile.txt","r"))
   {
   	 printf("Search: ");
   	 scanf("%s",str);
   	  
	  while(fscanf(file,"%s",ch)!=EOF)
   	  {
         //printf("%s\n",ch);   //To check
	     check=strcmp(str,ch);
 	  	if(check==0)
   	  	{
   	  		count++;
   	  		printf("\n%d.%s --> %d -->Time\n\a",count,str,count);
		}
	  }
   }
     printf("\n.....%s is present %d times in this txt/doc file.....\n\n",str,count);
	fclose(file);
}
