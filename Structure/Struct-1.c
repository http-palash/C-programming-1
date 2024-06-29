// Structure 1

#include<stdio.h>
struct pal
{
	int no;
	char name[10];
};
void main()
{
    struct pal p;
    printf("Enter no: ");
    scanf("%d",&p.no);
    printf("Enter String: ");
    scanf("%s",p.name);
    printf("No=%d",p.no);
    printf("\tName=%s",p.name);
}

