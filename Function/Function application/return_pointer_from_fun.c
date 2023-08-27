#include<stdio.h>
int* retpointer(int []);

void main()
{
	int a[]={1,2,3,4,5},*p;
	p=retpointer(a);
	printf("%d\n",*p);
}
int* retpointer(int a[])
{
	a=a+2;
	return a;
}
