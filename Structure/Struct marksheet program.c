#include <stdio.h>
struct student
{
	float s1,s2,s3,s4,s5;
	char name[25];
	int rollno;
};
int main()
{   
    struct student a[100];
    int i,n;
    
 	printf("Enter no of record: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{   
	    printf("\n\t\tRecord=%d\n\n",i+1);
	    printf("\nEnter name of Student: ");
	    scanf("%s",a[i].name);
	    printf("\nEnter roll no of student: ");
	    scanf("%d",&a[i].rollno);
		printf("\nEnter marks of 1st Subject: ");
		scanf("%f",&a[i].s1);
		printf("Enter marks of 2nd Subject: ");
		scanf("%f",&a[i].s2);
		printf("Enter marks of 3rd Subject: ");
		scanf("%f",&a[i].s3);
		printf("Enter marks of 4th Subject: ");
		scanf("%f",&a[i].s4);
		printf("Enter marks of 5th Subject: ");
		scanf("%f",&a[i].s5);
   }
	for(i=0;i<n;i++)
	{  
	    float total,percentage;
		
		total=a[i].s1+a[i].s2+a[i].s3+a[i].s4+a[i].s5;
    	percentage=total/5;
    	printf("\n\t\tRecord=%d\n\n",i+1); 
    	printf("Name=%s  Roll no=%d \n\n",a[i].name,a[i].rollno);
    	if(a[i].s1<33)
    	{

    	 printf("Marks in 1st subject= %.2f  FAIL\n",a[i].s1);
		}
		else
		{
    	 printf("Marks in 1st subject= %.2f\n",a[i].s1);
        }
     	if(a[i].s2<33)
    	{
    	 printf("Marks in 2nd subject= %.2f  FAIL\n",a[i].s2);
		}
		else
		{
    	 printf("Marks in 2nd subject= %.2f\n",a[i].s2);
        }
    	if(a[i].s3<33)
    	{
    	 printf("Marks in 3rd subject= %.2f  FAIL\n",a[i].s3);
		}
		else
		{
    	 printf("Marks in 3rd subject= %.2f\n",a[i].s3);
        }
    	if(a[i].s4<33)
    	{
    	 printf("Marks in 4th subject= %.2f  FAIL\n",a[i].s4);
		}
		else
		{
    	 printf("Marks in 4th subject= %.2f\n",a[i].s4);
        }
    	if(a[i].s5<33)
    	{
    	 printf("Marks in 5th subject= %.2f  FAIL\n",a[i].s5);
		}
		else
		{
    	 printf("Marks in 5th subject= %.2f\n",a[i].s5);
        }
		printf("Total marks=%.2f \t Percentage=%.2f \t",total,percentage);
		if (percentage<33)
		{
			printf("Result=Supply");
		}
		else
		{
			printf("Result=pass");
		}
    	printf("\n\n");
    }
	return 0;
}
