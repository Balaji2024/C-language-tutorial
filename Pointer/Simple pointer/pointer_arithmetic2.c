#include<stdio.h>
#include<math.h>
void main()
{
	int a=10,b=20,c,d,e;
	int *p,*q;
	p=&a;
	q=&b;
	c=*p+*q;
	d=*p**q;
	e=*q-*p;
	printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n",a,b,c,d,e);
	printf("a=%p\nb=%p\nc=%p\nd=%p\ne=%p\n",a,b,c,d,e);
	printf("p=%p\n",*p);
		printf("p=%p\n",*q);
			printf("p=%p\n",p);
				printf("p=%p\n",q);
				
	*p=*p+c*e;	
	*q=*p+*q;
		printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n",a,b,c,d,e);
	printf("a=%p\nb=%p\nc=%p\nd=%p\ne=%p\n",a,b,c,d,e);
	printf("p=%p\n",*p);
		printf("p=%p\n",*q);
			printf("p=%p\n",p);
				printf("p=%p",q);
			
	

}
