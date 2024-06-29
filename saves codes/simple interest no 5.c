#include<stdio.h>

int main()
{
	float si,p,r,t;
	clrscr();
	printf("Enter principal:  ");
	scanf("%f",&p);
	printf("Enter rate: ");
	scanf("%f",&r);
	printf("Enter time: ");
	scanf("%f",&t);
	si=(p*r*t )/ 100;
	printf("Simple interest:%.2f ",si);
	return 0;
}
