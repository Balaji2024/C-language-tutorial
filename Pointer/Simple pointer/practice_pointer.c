#include<stdio.h>
#include<math.h>
void main()
{
	int a=10,b=20,c,d,e;
	int *p,*q;
	p=&a;
	q=&b;
	printf("p=%p\n",*p);
	printf("p=%p\n",*q);
	printf("p=%p\n",p);
	printf("p=%p\n",q);
	printf("p=%d\n",*p);
	printf("p=%d\n",*q);
	printf("p=%d\n",p);
	printf("p=%d\n",q);
	printf("p=%p\n",&p);
	printf("p=%p\n",&q);
	printf("p=%p\n",&a);
	printf("p=%p\n",&b);
	
	

	

}
