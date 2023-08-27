#include<stdio.h>
#include<math.h>
void main()
{
	int a[5]={0,1,-1,10,11};
	int *p=&a[0];
	printf("%d\n",*p);
	p=p+2;
	printf("%d\n",*p);
	p+2;
	printf("%d\n",*p);
}
