#include<stdio.h>
int test(int x, int y)
{
	x=2*x+y;
	return x;
}
int main()
{
	int x=2,y=5;
	y=test(y,x);
	x=test(y,x); 
	printf("%d\n",x);
	return 0;
}
