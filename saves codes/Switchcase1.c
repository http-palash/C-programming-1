#include <stdio.h>
 int main()
{  
    int a;
    printf("Enter a no : ");
    scanf("%d",&a);
	    switch(a)
    {
    	case 1 :
    	printf("Indore");
    	break;
    	case 2 :
    	printf("Delhi");
    	break;
    	case 3 :
    	printf("Mumbai");
    	break;
    	case 4 :
    	printf("Ujjain");
    	break;
    	default : printf("Invalid.....");
	}
	return 0;
}
