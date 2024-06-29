// To count blank in doc
#include<stdio.h>
#include<stdio.h>
int main()
{
   FILE *file;
   char ch[200],str[200];
   int count=0,check,flag=1;
   
   if(file=fopen("Myfile.txt","r"))
   {
	  fgets(ch,20,file);
   	  
         printf("string = %d = %s\n",flag,ch);   //To check
	  
	   fgets(ch,20,file);
   	  
         printf("string = %d = %s\n",flag,ch);   //To check
	  
   }
     printf("\n\aThere are %d blank spaces present in this txt/doc file.....\n\n",count);
	fclose(file);
}
