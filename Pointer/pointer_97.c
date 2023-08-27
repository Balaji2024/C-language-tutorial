#include<stdio.h>
#include<math.h>
void main()
{
	int k;
	int a[5]={10,2,3,4,5};
	int *p;
	p=a;
	k=*(&a[1]+2)+*(&a[0]+2);
	printf("k=%d",k);	
}
