#include<stdio.h>
#include<string.h>
union data{
    int i;
	float j;
	char str[30];
	
}data1;
int main()
{
	printf("\nsize of data:%lu\n",sizeof(data1));
 	
	data1.j=20.5;
	data1.i=25;

	printf("\ni=%d\n",data1.i);
	
	printf("\nj=%f\n",data1.j);
   strcpy(data1.str,"Cprogramming"); 
    printf("\nstring=%s",data1.str);
}

