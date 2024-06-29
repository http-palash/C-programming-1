// To enter int in fp using scanf

#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	int i;
	fp=fopen("get.txt","w");
	
	  printf("Enter int value: ");
	  scanf("%d",&i);
	  putw(i,fp);
    
    fclose(fp);
	return 0;
}
