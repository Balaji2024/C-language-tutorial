#include<stdio.h>
#include<math.h>
void main()
{
	int *p;
	{
		int a=5;
		p=&a;
		//printf("%d\n",a);
	}
    printf("%d",*p);
	
}
