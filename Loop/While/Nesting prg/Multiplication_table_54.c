#include<stdio.h>
void main()
{
	int a=1,b,c;
	printf("    Multiplication table.....\n\n\n");
	while(a<=10)
	{
		b=1;
		while(b<=10)
		{
			c=a*b;
			printf("%5d",c);
			b++;
		}
		printf("\n");
		a++;
	}
	
}
