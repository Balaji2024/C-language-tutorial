#include<stdio.h>  
void show()
{
	static int a;
	printf("In show function value of a=%d\n",a);
	a=a+100;
}
void main()
{
	show();
	show();
	show();
}
