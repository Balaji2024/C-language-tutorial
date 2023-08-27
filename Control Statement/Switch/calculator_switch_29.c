#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c,sum,sub,mul,div;
	
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	printf("Enter choice ");
	scanf("%c",&c);
	while(c!='~')
	{
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	
	
	switch(c)
	{
		case '+':
			sum=a+b;
			printf("Sum = %d\n",sum);
			break;
		case '-':
		    sub=a-b;
			printf("Sub = %d\n",sub);
			break;
		case '*':
		    mul=a*b;
			printf("Mul = %d\n",mul);
			break;
		case '/':
		    div=a/b;
			printf("Div = %d\n",div);
			break;
		case '~':
		    exit(0);
			break;	
		default:
		    printf("Enter valid choice.....\n");
				
    }
	}
	
}
