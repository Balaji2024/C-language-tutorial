#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a, b, sum, sub, mul, div;
	char c;
	printf("Enter first number ");
	scanf("%d", &a);
	printf("Enter second number ");
	scanf("%d", &b);

	while (a!=0)
	{
		printf("Enter choice ");
		scanf(" %c",&c);
		switch (c)
		{
		case '+':
			sum = a + b;
			printf("Sum = %d\n", sum);
			break;
		case '-':
			sub = a - b;
			printf("Sub = %d\n", sub);
			break;
		case '*':
			mul = a * b;
			printf("Mul = %d\n", mul);
			break;
		case '/':
			div = a / b;
			printf("Div = %d\n", div);
			break;
		case '0':
			exit(0);
			break;
		default:
			printf("Enter valid choice.....\n");
		}
	}
}
