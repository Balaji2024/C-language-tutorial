#include<stdio.h>
#include<math.h>
void main()
{
	int k;
	int a[5]={10,20,30,40,50};
	int *p;
	p=a;
	printf("p=%p",p);
	k=*++p;
	printf("\np=%p k=%d a[0]=%d",p,k,a[0]);	
}
