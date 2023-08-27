#include<stdio.h>
void main()
{
	int a,b=0;
	printf("Enter number ");
	scanf("%d",&a);
	while(a>0)
	{
		b++;
		a=a/10;
		
	}
	printf("Total number of digit = %d",b);
}
