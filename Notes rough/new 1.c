#include<stdio.h>
#include<stdlib.h>

struct emp
{
  int id;
  char name[50];
  float salary;
};

int main()
{
    struct emp p,*e;
    e=&p;
    e=(struct emp*)malloc(sizeof(struct emp));
    
    int i,n;
    
    printf("Enter number of record's you want to enter: \n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter record no  %d",i+1);
        
        printf("Employee name: ");
        scanf("%s",e[i]->name);
        printf("Employee id");
        scanf("%d",&e[i]->id);
        printf("Employee name : ");
        scanf("%f",&e[i]->salary);
    }
    
    system("cls");
    
    printf("Entered record's");
    for(i=0;i<n;i++)
    {
        printf("\nEntered record no  %d",i+1);
        
        printf("Employee name: %s",e[i]->name);
        printf("Employee id:%d",e[i]->id);
        printf("Employee salary : %f",e[i]->salary);
    }
    return 0;
}