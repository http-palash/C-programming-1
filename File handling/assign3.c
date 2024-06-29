
#include <stdio.h>  
#include <string.h>
int main()
{
    FILE *fp;
    int position,startend;
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

	    printf("\n\aEnter positon of text: ");
	    scanf("%d",&position);
	    
        fseek(fp , position, startend); 
      
        int n= ftell(fp);
    
	    printf("\n\aCharacter at position %d from %s is = %c\n\n",position,def,getc(fp));
    }
//     int i;
//     for(i=0; i<15; i++)
//    {
//      printf("\n\a%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c Chai piyo Coffee piyo maze karo %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2);
//	}
    return 0;
}
