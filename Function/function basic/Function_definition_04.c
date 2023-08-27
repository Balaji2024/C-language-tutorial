#include<stdio.h>

void sum(int,int);

void main()
{
	int a=5;
	int b=7;
	sum(a,b);    // Function calling
	printf("Hello");
}
 sum(int x,int y)
{
	int sum=0;                // Function definition
	sum=x+y;
	printf("Sum = %d\n",sum);
}
