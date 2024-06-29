// Structure 6(b)

#include<stdio.h>
struct pal
{
	int no;
	char name[10];
}s;// Global variable s declaration 
void show( );
int main()
{
	//struct pal p;
	printf("Enter no: \n");
	scanf("%d",&s.no);
	printf("Enter String: \n");
	scanf("%s",s.name);
	show();
 return 0;
}
void show()
{
	printf("\nNo=%d",s.no);
	printf("\nString=%s",s.name);
	
}
