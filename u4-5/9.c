#include <stdio.h> 
#include <string.h> 
 struct 
{ 
  unsigned int age : 3; //
} Age; 
int main( ) 
{ 
   Age.age = 4;    
   printf( "Sizeof( Age ) : %d byte\n", sizeof(Age) );   //4byte=32bits 
   printf( "Age.age : %d\n", Age.age ); 
 
   Age.age = 7;   
    printf( "Age.age : %d\n", Age.age ); 
 
   Age.age = 8;    
   printf( "Age.age : %d\n", Age.age ); 
 
   return 0; 
} 

