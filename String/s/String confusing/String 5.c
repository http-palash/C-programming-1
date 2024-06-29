// String 5

#include<stdio.h>

void main ()
{
	int i;
	char n[10],e[10],s[10],t[10];
	
	printf("Enter string 1: ");
	scanf("%c",&n[0]);
    scanf("%c",&n[1]);
	scanf("%c",&n[2]);
    scanf("%c",&n[3]);
	scanf("%c",&n[4]);
    scanf("%c",&n[5]);
    
    for(i=0;i<=4;i++)
    printf("%c",n[i]);
    
    printf("\n\n");
    
	printf("Enter string 2: ");
	scanf("%c",&e[0]);
    scanf("%c",&e[1]);
	scanf("%c",&e[2]);
    scanf("%c",&e[3]);
	scanf("%c",&e[4]);
    scanf("%c",&e[5]);
    
    for(i=0;i<=4;i++)
    {
    	printf("%c",e[i]);
	}
	
	printf("\n\n");
	
	printf("Enter string 3: ");
	scanf("%c",&s[0]);
    scanf("%c",&s[1]);
	scanf("%c",&s[2]);
    scanf("%c",&s[3]);
	scanf("%c",&s[4]);
    scanf("%c",&s[5]);
    
    for(i=0;i<=4;i++)
    {
    	printf("%c",s[i]);
	}
 	
	printf("\n\n");
	
	printf("Enter string : ");
	scanf("%c",&t[0]);
    scanf("%c",&t[1]);
	scanf("%c",&t[2]);
    scanf("%c",&t[3]);
	scanf("%c",&t[4]);
    scanf("%c",&t[5]);
	   
    for(i=0;i<=4;i++)
    {
    	printf("%c",t[i]);
	}
    return 0;	
}

