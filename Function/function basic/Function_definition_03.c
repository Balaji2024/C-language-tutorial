#include<stdio.h>

void sum(int,int);

void main()
{
	sum(5,7);    // Function calling
	printf("Hello");
}
void sum(int x,int y)
{
	int sum=0;                // Function definition
	sum=x+y;
	printf("Sum = %d\n",sum);
}
