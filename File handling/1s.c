// C Program to demonstrate the use of fseek()
#include <stdio.h>
  
int main()
{
    FILE *fp;
    fp = fopen("test.txt", "r");
      
     // Moving pointer to end
     //    fseek(fp, 0, SEEK_END);    

        fseek(fp, 0, 1);   //first 
        fseek(fp, 0, 2);  //last
      
      int n= ftell(fp);
     // Printing position of pointer
    
	 printf("%ld",n);
    return 0;
}
