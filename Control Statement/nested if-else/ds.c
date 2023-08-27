#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c,sum,sub,mul,div;
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	while(c!=5)
	{
	printf("1.Addition\n2.Sutraction\n3.Multiplication\n4.Division\n5.Exit\n");
	printf("Enter choice ");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			sum=a+b;
			printf("Sum = %d\n",sum);
			break;
		case 2:
			sub=a-b;
			printf("Sub = %d\n",sub);
			break;
		case 3:
			mul=a*b;
			printf("Mul = %d\n",mul);
			break;
		case 4:
			div=a/b;
			printf("Div = %d\n",div);
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Enter a valid choice\n");
			
	
	}
    }    
}
