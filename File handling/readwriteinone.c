// To append read both in file 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	
   FILE *file;
   char ch[200],str[200],name[100];
   int check,count=0,flag=1,choose;
//   char roll[5],cls[5];
   
  a3: printf("To open file in append mode choose>> 1 \nTo open file in read mode choose>> 2 \a\n");
   scanf("%d",&choose);
   if(choose==1)
   {
   	goto a1;
   }
   if(choose==2)
   {
   	goto a2;
   }
   if(choose!=1||2)
   {
   	 printf("Choose correct option");
   	 goto a3;
   }
   
   ////////////////////////////////////////
  a1: if(file=fopen("Myfile.txt","a"));
   
   {  
      fflush(stdin);
   	  printf("Enter string: ");
	  gets(ch);
	  fputs(ch,file);
	  exit(0); 
   }
   ///////////////////////////////////////////////
   
   a2:if(file=fopen("Myfile.txt","r"))
   {
   	 printf("Search by string/no: ");
   	 scanf("%s",str);
   	  
	  while(fscanf(file,"%s",ch)!=EOF)
   	  {
         //printf("%s\n",ch);   //To check
	    check=strcmp(str,ch);
		if(check==0)
   	  	{
//   	  	   strcpy(roll,str);
//   	  	   strcpy(name,fgets(ch,50,file));
   	  	
   	  	 fgets(ch,50,file);
         printf("\nstring = %d =\n%s%s\n",flag,str,ch); 
   	  	
//		printf("\nYou have searched for: %s\n\n",str);
   	  		count++;
   	  		printf("\n%d.%s --> %d -->Time\n\a",count,str,count);
   	  		flag++;
		}
	  }
//     printf("\nRoll no =%s \n\nName = %s",roll,name);
//     printf("\n\n\n\n.....%s is present %d times in this txt/doc file.....\n\n",str,count);
     exit(0);
    }
	fclose(file);
}
