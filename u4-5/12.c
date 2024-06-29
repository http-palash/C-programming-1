#include <stdio.h> 
#include <string.h> 
  
typedef struct Books 
{   
    char  title[50];   
    char  author[50];   
	char  subject[100];   
	int   book_id; 
} Book; 
  
int main( ) 
{ 
   Book b; 
  
   strcpy( b.title, "C Programming");   
    strcpy( b.author, "Nuha Ali");  
   strcpy( b.subject, "C Programming Tutorial"); 
  b.book_id = 6495407; 
  
   printf( "Book title : %s\n", b.title);   
   printf( "Book author : %s\n", b.author);                                
    printf( "Book subject : %s\n", b.subject);  
	  printf( "Book book_id : %d\n", b.book_id); 
    return 0; 
} 

