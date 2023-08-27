#include<stdio.h>
#include<math.h>
void main()
{
	int k;
	int a[5]={10,2,3,4,5};
	int *p;
	p=a;
	k=*p+*(p+2)**(p+1);
	printf("k=%d",k);	
}
