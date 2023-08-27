#include<stdio.h>

void sum(int,int);

void main()
{
	sum();    // Function calling
}
void sum()
{
	int a,b,sum=0;                // Function definition
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("Sum = %d\n",sum);
}
