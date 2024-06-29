// C Program to demonstrate the use of fseek()kjdvhsdvhskuhvuksrhvku
#include <stdio.h>
  
int main()
{
    FILE *fp;
    fp = fopen("test.txt","r");
	      
     // Moving pointer to end 
      fseek(fp,0,0);  //last
      
      char c=getc(fp);
      printf("%c",c); 
      int n= ftell(fp);
     // Printing position of pointer
	 printf("Position=%ld",n);
    return 0;
}


