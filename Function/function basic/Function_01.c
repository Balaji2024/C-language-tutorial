#include<stdio.h>
void sum()
{
	int a,b,sum=0;                // Function definition
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("Sum = %d\n",sum);
}
void main() 
{
	sum();    // Function calling 
	printf("Hello\n");
	sum();
}

/*
function declaration is not necessary but declaration is good
programming 
in this program dont need to declare function becoz main function
is after sum function */

