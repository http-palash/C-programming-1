// STRUCTURE RETURN 4

#include<stdio.h>
#include<string.h>
struct pal
{
 int no;
 char name[15];
};

struct pal disp(struct pal x);

int main()
{
 struct pal p,p2;

 printf("Enter no: \n");
 scanf("%d",&p.no);
 printf("Enter String: \n");
 scanf("%s",p.name);

 p2= disp(p);

 printf("\nno=%d",p2.no);
 printf("name=%s",p2.name);
return 0;
}

struct pal disp(struct pal x)
{
 printf("This is what we entered: \n");
 printf("%d",x.no);
 printf("%s\n",x.name);
 x.no=x.no+5;
 strcat(x.name,"genext");
 return(x);
}
