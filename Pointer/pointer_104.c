#include<stdio.h>
#include<math.h>
void main()
{
	int x=10;
	int *y=&x;
	
	printf("p=%d\n",x);
	printf("p=%u\n",&x);
	printf("p=%u\n",y);
	printf("p=%d\n",*y);
	printf("p=%u\n",&y);
	
}
