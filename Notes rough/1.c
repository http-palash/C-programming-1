#include<stdio.h>
#include<stdlib.h>

struct emp
{
  int emp_id;
  char name[50];
  float salary;  
};

int main()
{
    
     struct emp *e=(struct emp*)malloc(sizeof(struct emp));
     printf("Enter employee id : ");
     scanf("%d",&e->emp_id);
     printf("Enter employee name : ");
     scanf("%s",e->name);
     printf("Enter employee salary : ");
      scanf("%f",&e->salary);
      
    system("cls");
    
    printf("Name: %s",e->name);
    printf("\nId:%d",e->emp_id);
    printf("\nSalary: %f",e->salary);
    return 0;
}

