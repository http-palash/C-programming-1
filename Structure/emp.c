#include <stdio.h>
#include<stdlib.h>
struct employee
{
	int id;
	int age;
	char name[25];
};
int main()
{   
    struct employee a[10];
    int i,check;
	
	for(i=0;i<10;i++)
	{   
	    printf("\nEnter id: ");
	    scanf("%d",&a[i].id);
		printf("Enter age: ");
		scanf("%d",&a[i].age);
	    printf("Enter name of employee");
	    scanf("%s",a[i].name);
   }
	for(i=0;i<10;i++)
	{      printf("\nEnter id of employee to  search: ");
	        scanf("%d",&check);
         if(check==a[i].id)
         {
	      printf("\nRecord of searched employee\n ");
	      printf("id=%d\n",a[i].id);
	      printf("age=%d\n",a[i].age);
		  printf("Name=%s\n",a[i].name);
		  exit(0);
        }
	}  


	return 0;
}
