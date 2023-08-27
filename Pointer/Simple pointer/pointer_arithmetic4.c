#include<stdio.h>
#include<math.h>
void main()
{
	int a[5]={0,1,-1,10,11},d;
	int b[5]={1,2,3,4,5};
	int *p=&a[0];
	int *q=&b[2];
	printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n\n",*q);
	d=p-q;
	 printf("%d\n",d);
}
