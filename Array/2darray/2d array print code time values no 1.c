// 2D array entering values in code time 

#include<stdio.h>
int main()
{
	int i,j,a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
	 printf("\n");
	}
	return 0;
}
