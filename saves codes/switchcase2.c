#include <stdio.h>
 int main()
{  
    int a;
    printf("Enter a no : ");
    scanf("%d",&a);
	    switch(a)
    {
    	case 1 :
    	printf("Sunday");
    	break;
    	case 2 :
    	printf("Monday");
    	break;
    	case 3 :
    	printf("Tuesday");
    	break;
    	case 4 :
    	printf("wednesday");
    	break;
    	case 5 :
    	printf("Monday");
    	break;
    	case 6 :
    	printf("friday");
    	break;
    	case 7 :
    	printf("saturday"); 
    	default : printf("Invalid.....");
	}
	return 0;
}
