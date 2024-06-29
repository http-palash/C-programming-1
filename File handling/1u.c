// C Program to demonstrate the use of fseek()kjdvhsdvhskuhvuksrhvku
#include <stdio.h>
  
int main()
{
    FILE *fp;
    fp = fopen("test.txt", "w");
    char c='a';
	      
     // Moving pointer to end 
      fseek(fp, 0, 1);  //last
      
      int n= ftell(fp);
     // Printing position of pointer
     put(c,fp);
     
	 printf("%ld",n);
    return 0;
}
