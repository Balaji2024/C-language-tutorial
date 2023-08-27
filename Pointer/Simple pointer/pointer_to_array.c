#include<stdio.h>
#include<math.h>
void main()
{
	int i;
	int a[5]={10,20,30,40,50};
	int *p;
	p=a;
	for(i=1;i<=5;i++)
	{
		printf("Address = %p\tvalue = %d\n",p,*p);
		p++;
	}
	
}
