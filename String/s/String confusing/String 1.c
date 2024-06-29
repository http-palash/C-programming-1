// String 1

#include<stdio.h>
void main()
{
	int i;
	char n[10]="Palash";
	
	printf("%c",n[0]);
	printf("%c",n[1]);
    printf("%c",n[2]);
	printf("%c",n[3]);
	printf("%c",n[4]);
	printf("%c",n[5]);
	    
	printf("\n");
	
	for(i=0;i<=10;i++)
	{
		printf("%c",n[i]);
	}    
	
	printf("\n");
	
	printf("%s",n);
	
	return 0;
}
