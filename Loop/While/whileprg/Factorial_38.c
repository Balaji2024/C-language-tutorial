#include<stdio.h>
void main()
{
	int a,b=1;
	printf("Enter number ");
	scanf("%d",&a);
	while(a>0)
	{
		b=b*a;
		a=a-1; 
	}
	printf("Factorial = %d",b);
}
