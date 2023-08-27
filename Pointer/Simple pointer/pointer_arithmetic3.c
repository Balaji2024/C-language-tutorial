#include<stdio.h>
#include<math.h>
void main()
{
	int a[]={0,1,-1,10,11},d;
	int *p=&a[0];
	int *q=&a[4];
    d=p-q;
    printf("%d\n",d);
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n\n",*q);
    
    *q=25;
    printf("%d\n",*q);
    printf("%d\n",a[0]);
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n\n",*q);
    
    d=q-p;
    printf("%d\n",d);
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n\n",*q);
    *p=27;
    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n\n",*q);
    q=q-3;
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n\n",*q);
    p=p+3;
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n\n",*q);
    d=p-q;
    printf("%d\n",d);
	printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",*p);
    printf("%d\n\n",*q);
}
