// Structure 6 

#include<stdio.h>
struct pal
{
	int no;
	char name[10];
}s;// Global variable s declaration 
void show( );
void main()
{
	//struct pal p;
	printf("Enter no: \n");
	scanf("%d",&s.no);
	printf("Enter String: \n");
	scanf("%s",s.name);
	show();

}
void show()
{
	printf("%d",s.no);
	printf("%s",s.name);
	
}
