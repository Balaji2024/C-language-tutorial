#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	printf("Before swaping ......\n");
	printf("a=%d\tb=%d\n",a,b);
	temp=a;    //temp=b;
	a=b;       //b=a;
	b=temp;    //a=temp;
	printf("After swaping ......\n");
	printf("a=%d\tb=%d",a,b);
}
