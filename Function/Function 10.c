// Function 10 Function within a function

#include<stdio.h>

int add(int x,int y);
int disp (int c);
void main()
{
	int a,b;
	printf("Enter two no : ");
	scanf("%d%d",&a,&b);
	add(a,b);
}
  int add(int x,int y)
{
	int z;
	z=x+y;
	disp (z);
}
  int disp (int c)
{
	printf("Addition:%d",c);
	return 0;
}
