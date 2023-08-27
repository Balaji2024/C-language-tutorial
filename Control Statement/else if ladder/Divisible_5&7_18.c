#include<stdio.h>
void main()
{
	int a;
	printf("Enter number ");
	scanf("%d",&a);
	if(a%5==0&&a%7==0)
	printf("Number is divisible by both 5&7 ");
	else if(a%5==0)
	printf("Number is divisible by 5 only ");
	else if(a%7==0)
	printf("Number is divisible by 7 only ");
	else
	printf("Number is not divisible by both 5&7 ");
	
}
