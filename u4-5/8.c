#include <stdio.h> 
#include <string.h> 
 
/* define simple structure */ 
struct 
{ 
  unsigned int widthValidated:4;
  unsigned int heightValidated:31; 
} status1; 
 
/* define a structure with bit fields */ 
struct 
{ 
  unsigned int widthValidated : 30; // one byte=8bits within 32 bits 32+
  unsigned int heightValidated : 30; 
  unsigned int a:4;
} status2; 
  
int main( ) 
{ 
   printf( "Memory size occupied by status1 : %d\n", sizeof(status1));  
   printf( "Memory size occupied by status2 : %d\n", sizeof(status2)); 
 
   return 0; 
} 

