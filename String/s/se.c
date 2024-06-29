// String strrev function 

#include <stdio.h>
#include <string.h>

void main ()
{
	char s1[]="Palash";
	char s2[]="Bajpai";
	char s3[100];
    
    printf("The strcmp for s1 s2 returned %d\n\n",strcmp(s1,s2));
	
	strcpy(s3,strcat(s1,s2));
	puts(s3);
}
