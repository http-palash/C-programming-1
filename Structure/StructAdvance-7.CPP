// Structure 7

#include<stdio.h>
struct pal
{
	int no;
	char name[10];
};
int main()
{
	struct pal p,*pd;
	pd=&p;
	printf("Enter no: \n");
	scanf("%d",&pd->no);
	printf("Enter String: \n");
	scanf("%s",pd->name);

	printf("\nNo=%d",pd->no);
	printf("\nName=%s",pd->name);
    return 0;
		
}
