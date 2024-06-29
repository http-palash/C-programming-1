// Structure 2

#include<stdio.h>
struct pal
{
	int no;
	char name[10];
};
void main()
{    
    int i;
	struct pal p[5];
	for(i=0;i<5;i++)
	{
	 printf("Enter no: ");
	 scanf("%d",&p[i].no);
	 printf("Enter String: ");
	 scanf("%s",p[i].name);
    }
  	for(i=0;i<5;i++)
	{

	 printf("\n%d",p[i].no);
	 printf("\t%s",p[i].name);
    }
}

