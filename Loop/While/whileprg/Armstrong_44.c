#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c=0,arm=0,d;
	printf("Enter number ");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		c++;
		a=a/10;
	}
	printf("Digit = %d\n",c);
	a=b;
	while(a>0)
	{
		d=a%10;
		arm=pow(d,c)+arm;
		a=a/10;
	}
	if(b==arm)
	printf("Number is Armstrong ");
	else
	printf("Number is not Armstrong ");
	
}
