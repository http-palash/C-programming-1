// Structure 3

#include<stdio.h>

struct pal
{
 int no;
 char name[10];
};
void disp(struct pal x);
int main()
{
 struct pal p;

 printf("Enter no: \n");
 scanf("%d",&p.no);
 printf("Enter String: \n");
 scanf("%s",p.name);
 disp(p);
 return 0;
}
void disp (struct pal x)
{
 printf("No=%d\n",x.no);
 printf("String=%s",x.name);
}
