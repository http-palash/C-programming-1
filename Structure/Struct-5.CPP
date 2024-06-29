// Structure 5

#include<stdio.h>
struct pal
{
	int no;
	char name[10];
};
void show(struct pal s);
int main()
{
	struct pal p;
	printf("Enter no: \n");
	scanf("%d",&p.no);
	printf("Enter String: \n");
	scanf("%s",p.name);
	show(p);

}
void show(struct pal s)
{
	printf("\nNo=%d\n",s.no);
	printf("String%s",s.name);
	
}
