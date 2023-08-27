#include<stdio.h>
#include<math.h>
void main()
{
	int a=10;
	int *p,**q;
	p=&a;
	q=&p;

	printf("p=%p\n",p);
	printf("p=%d\n",*p);
	printf("p=%p\n",a);
	printf("p=%p\n",*p);
	printf("p=%d\n",**q);
	
	

	

}
