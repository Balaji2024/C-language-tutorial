#include<stdio.h>
void disp(int n)
{
	if(n<1)
	return;
	else
	{
		printf("%d",n);
	    disp(n-1);
		printf("%d",n);
	}
}
void main()
{
	int n=3;
	disp(n);
}
