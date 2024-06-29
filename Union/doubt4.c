#include <stdio.h>
//struct
union
{
   int i;
//  float j;
   char arr[26];	
}d1;
 int main()
 {
 	printf("size of union:%lu\n",sizeof(d1));
 	printf("size of int:%d\n",sizeof(d1.i));
// 	printf("size of float:%lu\n",sizeof(d1.j));
 	printf("size of char:%lu\n",sizeof(d1.arr));
	return 0;
}
