// writing int in txt file using putw

#include<stdio.h>
int main()
{
	FILE *fp;
	int d,i;
	fp=fopen("get.txt","w");
	
//	printf("Enter an integer: ");
//	scanf("%d",&d);
	putw(65,fp); 
//  putw(4,fp);
//	Write a int to txt file
    
    fclose(fp);
	return 0;
}
