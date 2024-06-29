#include<stdio.h>
int main()
{
	int a[3][3],i,j,add;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value of a[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<3;i++)
    {
        add=0;
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=%d+%d\n",i+1,j+1,a[i][j],add);
			add=a[i][j]+add;
		}
		printf("On adding column:\nc[%d]=%d\n",i+1,add);
	}
	return 0;
}
