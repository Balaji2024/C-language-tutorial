#include<stdio.h>
#include<math.h>
void main()
{
	int k;
	int a[5]={10,20,30,40,50};
	int *p,*q;
	p=&a[0];
	q=&a[2];
	k=(*q)++ + ++(*p);
	printf("\nk=%d",k);	
	
	printf("\np=%d",*p);	
	printf("\nq=%d",*q);	
	
}
