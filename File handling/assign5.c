
#include <stdio.h>  
#include <string.h>
int main()
{
    FILE *fp;
    int position=0,startend;
    char def[5];
    
    fp = fopen("myfile.txt","r");
    
	if(fp = fopen("myfile.txt","r"))
    {
	  
       printf("... %c%c File opened in read mode %c%c ...\a\n\n..",2,2,2,2);
       q:printf("...Choose whence file Start/End...\n\n...File start...>> enter 1 ..\n...File end...>>enter 2 ..\n\n");
       scanf("%d",&startend);
       
	   if(startend==1||startend==2)
       {
         if(startend==1)
		 {
       	   printf("\n\aYour text File is opened from start..\n");
       	   strcpy(def,"start");
		  }
		 if(startend==2)
       	 {
       	    printf("\n\aYour text File is opened from last..\n");
       	    strcpy(def,"end");
		  }
	   
	   }
	    else
       {
	    	printf("\n\a...%c%c%c%cChoose correct option idiot...%c%c%c%c\n",2,2,2,2,2,2,2,2);
	    	goto q;
    	 }
//	  while(fscanf(file,"%s",ch)!=EOF)
//   	  {
//         //printf("%s\n",ch);   //To check
//	    check=strcmp(str,ch);
//		if(check==0)
//   	  	{
//   	  		
//   	  	 fgets(ch,20,file);
//   	  	 
//         printf("\nstring = %d =\n%s%s\n",flag,str,ch); 
//   	  	
////		printf("\nYou have searched for: %s\n\n",str);
//   	  		count++;
//   	  		printf("\n%d.%s --> %d -->Time\n\a",count,str,count);
//   	  		flag++;
//		}
//	  }




////////////////////////////////////////////////////////
        fseek(fp , position, startend); 
      
        int n= ftell(fp);
    
	    printf("\n\aCharacter at position %d from %s is = %s\n\n",position,def,gets(fp));
    }
    return 0;
}
