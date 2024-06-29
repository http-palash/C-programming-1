#include<stdio.h>
struct corona_detail
{
	char studentname[20];
    char fathername[30];  	
    char mothername[30]
}s1;
void main()
{
	int i;

		printf("\nStudent info\n");
	    printf("\nEnter name:");
	    scanf("%s",&s1.studentname);
	    printf("Enter father's name:");
	    scanf("%s",&s1.fathername);
	    printf("Enter mother's name':");
	    scanf("%s",&s1.mothername);	
	
	    printf("\nStudent Name:%s\n",s1.studentname);
	    printf("\nFather's name:%s\n",s1.fathername);
	    printf("\nMother's name:%s\n",s1.mothername);	
}
