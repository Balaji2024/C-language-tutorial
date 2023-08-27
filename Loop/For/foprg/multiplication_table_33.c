#include<stdio.h>
void main()
{
	int a,b,n;
	printf("Enter number ");
	scanf("%d",&n);
	printf("Multiplication table\n");
	for(a=1;a<=10;a++)
	{
		b=n*a;
		printf("%d*%2d = %d\n",n,a,b);
	}


}
