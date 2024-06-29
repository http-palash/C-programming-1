// C Program to demonstrate the use of fseek()
#include <stdio.h>
  
int main()
{
    FILE *fp;
    fp = fopen("test.txt","r");
      
     // Moving pointer to end
        fseek(fp, 2, 1);   //first 
      
      int n= ftell(fp);
     // Printing position of pointer
	 printf("Position:%ld",n);
	 
	char c;
	 c=getc(fp);
     printf("\nCharacter=%c\n",c);
    return 0;
}
