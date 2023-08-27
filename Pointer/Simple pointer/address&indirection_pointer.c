#include<stdio.h>
#include<math.h>
void main()
{
	int c;
	int a=10,b=9;
	int *p,*q;
	p=&a;
	q=&b;
	c=*q;
	printf("a=%d\n",a);
	printf("a=%d\n",*p);
	printf("a=%p\n",&a);
	printf("a=%p\n",p);
	printf("a=%p\n",&p);
	printf("c=%d\n",c);
		*p=20;
	printf("a=%d\n",a);
	printf("a=%p\n",p);
	
}
