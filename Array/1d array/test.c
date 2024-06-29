#include<stdio.h>
#include<stdlib.h>
int main()
{
    //int a[5],*ptr;
    int *ptr,n,i,position;
    
    printf("Enter size of array : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int) );
    
    printf("Enter %d elements in array : \n",n);
    
    for(i=0;i<n;i++)
    {
     scanf("%d",&ptr[i]);
    }
    
    system("cls");

    printf("Array element's are:\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i+1,ptr[i]);
    }
    
    printf("\nEnter index to delete: \n");
    scanf("%d",&position);
    
    position=position-1;
    
    for(i=position;i<n;i++)
    {
        ptr[i]=ptr[i+1];
    }
    n=n-1;
    system("cls");
     printf("Array element's are:\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i+1,ptr[i]);
    }
    return 0; 
}
