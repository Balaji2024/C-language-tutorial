#include<stdio.h>
#include<math.h>
void main()
{
	int a[7]={10,11,-1,56,67,5,4};
	int *p,*q;
	p=a;
	printf("%d\n",*p);
	printf("%d %d %d\n",(*p),*p++,*++p);
	p++;
	printf("%d\n",*p);
	
	
    
}
